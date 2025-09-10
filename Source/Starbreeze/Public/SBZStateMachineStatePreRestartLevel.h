#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZClientStateMachineState.h"
#include "SBZPreplanningAsset.h"
#include "SBZStateMachineStatePreRestartLevel.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStatePreRestartLevel : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPreplanningAsset> PreplanningAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStatePreRestartLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnP2PHostBeaconClientReady(const FUniqueNetIdRepl& InPlayerId, const FString& InDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void OnP2PHostBeaconClientDisconnected(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnClientStartSeamlessTravel(const FUniqueNetIdRepl& InPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializeHostMigrationTravelHost();
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializeHostMigrationTravelClient();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconDisconnect();
    
};

