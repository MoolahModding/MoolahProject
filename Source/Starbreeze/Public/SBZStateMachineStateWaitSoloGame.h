#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
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
    
};

