#pragma once
#include "CoreMinimal.h"
#include "EBlackScreenTransitionType.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateJobOverviewDirectJoin.generated.h"

class ASBZMissionState;
class ASBZPlayerController;
class USBZJobOverviewBaseWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateJobOverviewDirectJoin : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZJobOverviewBaseWidget* JobOverviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMissionState* MissionState;
    
public:
    USBZStateMachineStateJobOverviewDirectJoin();

    UFUNCTION(BlueprintCallable)
    void OnHandleBeginPlayState(ASBZPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void EnableReadyButton();
    
    UFUNCTION(BlueprintCallable)
    void ClientShowBlackScreen(EBlackScreenTransitionType BlackScreenTransitionType);
    
};

