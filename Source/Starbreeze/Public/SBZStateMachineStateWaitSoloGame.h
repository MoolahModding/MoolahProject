#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "SBZClientStateMachineState.h"
#include "SBZMatchmakingSessionResult.h"
#include "SBZStateMachineStateWaitSoloGame.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitSoloGame : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateWaitSoloGame();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayerSpawnDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnServerRetrieveEntitlementsDone(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnServerGameRecordsReceived(const ESBZMetaRequestResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadChallengesDone(const ESBZMetaRequestResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnGetSkuToItemIdMappingForItemsToGrantDone(ESBZMetaRequestResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchMapConfigurationDataDone(const ESBZMetaRequestResult& Result, const FString& InMapAssetName, FSBZMatchmakingSessionResult InMatchmakingResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncLoadAssetDatabaseDone();
    
};

