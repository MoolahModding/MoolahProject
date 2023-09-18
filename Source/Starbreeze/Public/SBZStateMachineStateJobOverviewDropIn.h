#pragma once
#include "CoreMinimal.h"
#include "EBlackScreenTransitionType.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateJobOverviewDropIn.generated.h"

class ASBZPlayerController;
class USBZJobOverviewBaseWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateJobOverviewDropIn : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZJobOverviewBaseWidget* JobOverviewWidget;
    
public:
    USBZStateMachineStateJobOverviewDropIn();

    UFUNCTION(BlueprintCallable)
    void OnHandleBeginPlayState(ASBZPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void NetworkDisconnected();
    
    UFUNCTION(BlueprintCallable)
    void EnableReadyButton();
    
    UFUNCTION(BlueprintCallable)
    void ClientShowBlackScreen(EBlackScreenTransitionType BlackScreenTransitionType);
    
};

