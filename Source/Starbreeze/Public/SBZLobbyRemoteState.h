#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZLobbyCharacterInfo.h"
#include "SBZLobbyRemoteState.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Engine)
class STARBREEZE_API ASBZLobbyRemoteState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotReservationTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyInfo, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfo> PlayersJoinInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyInfo, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfo> PlayersInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbyTravelTimeoutTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate CharacterInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyTimeout, meta=(AllowPrivateAccess=true))
    int32 LobbyTimeout;
    
public:
    ASBZLobbyRemoteState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyTimeout();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyInfo();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateChanged(FName NewState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastWaitGameTimerStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastRemotePlayerAcceptedMatch();
    
};

