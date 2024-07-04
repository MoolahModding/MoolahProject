#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitMainMenu.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitMainMenu : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TickSeamlessTravelTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateWaitMainMenu();

private:
    UFUNCTION(BlueprintCallable)
    void HandleP2PSessionDestroyed(FName SessionName, bool bResult);
    
};

