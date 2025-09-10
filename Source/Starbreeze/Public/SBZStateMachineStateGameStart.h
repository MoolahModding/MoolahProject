#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateGameStart.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateGameStart : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateGameStart();

private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpKickedFromHeistClosed(FName CloseActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
};

