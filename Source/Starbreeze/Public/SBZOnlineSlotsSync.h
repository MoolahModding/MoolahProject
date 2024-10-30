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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString VoiceSessionId;
    
public:
    ASBZOnlineSlotsSync(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerName(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlatform(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfamyLevel(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEOSProductUserId(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void UniqueIdUpdated(ASBZPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SyncSlotsData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SlotsData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemovePlayerState(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeInitialized(AGameModeBase* GameMode);
    
    UFUNCTION(BlueprintCallable)
    void OnAddPlayerState(APlayerState* PlayerState);
    
};

