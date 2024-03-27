#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZSlotData.h"
#include "SBZOnlineSlotsSync.generated.h"

class AGameModeBase;
class APlayerState;
class ASBZPlayerState;
class USBZOnlineSession;

UCLASS(Blueprintable)
class ASBZOnlineSlotsSync : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlotsData, meta=(AllowPrivateAccess=true))
    TArray<FSBZSlotData> SlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSession* OnlineSession;
    
public:
    ASBZOnlineSlotsSync();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void UpdatePlayerName(ASBZPlayerState* InPlayerState);
    
    UFUNCTION()
    void UpdatePlatform(ASBZPlayerState* InPlayerState);
    
    UFUNCTION()
    void UpdateInfamyLevel(ASBZPlayerState* InPlayerState);
    
    UFUNCTION()
    void UniqueIdUpdated(ASBZPlayerState* InPlayerState);
    
    UFUNCTION()
    void SyncSlotsData();
    
public:
    UFUNCTION()
    void OnRep_SlotsData();
    
private:
    UFUNCTION()
    void OnRemovePlayerState(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION()
    void OnGameModeInitialized(AGameModeBase* GameMode);
    
    UFUNCTION()
    void OnAddPlayerState(APlayerState* PlayerState);
    
};

