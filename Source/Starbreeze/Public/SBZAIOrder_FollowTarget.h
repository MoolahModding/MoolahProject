#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_FollowTarget.generated.h"

class ASBZAIController;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_FollowTarget : public USBZAIOrder {
    GENERATED_BODY()
public:
    USBZAIOrder_FollowTarget();

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerOrderPushed(ASBZAIController* AIController, USBZAIOrder* AIOrder);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerInteracted(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnHitByPlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAIPawnKilled();
    
};

