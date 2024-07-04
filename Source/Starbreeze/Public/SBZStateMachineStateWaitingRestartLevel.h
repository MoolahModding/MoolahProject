#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingRestartLevel.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataRestartLevel;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingRestartLevel : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataRestartLevel* RestartLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateWaitingRestartLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerStateReady();
    
    UFUNCTION(BlueprintCallable)
    void OnHandleGameStateReady();
    
};

