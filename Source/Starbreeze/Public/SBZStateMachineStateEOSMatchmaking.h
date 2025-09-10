#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateEOSMatchmaking.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataMatchmaking;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZStateMachineStateEOSMatchmaking : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLobbyConnectionAttempts;
    
public:
    USBZStateMachineStateEOSMatchmaking();

private:
    UFUNCTION(BlueprintCallable)
    void OnPopupSessionDoesNotExistClosed(FName InCloseActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconDisconnect();
    
};

