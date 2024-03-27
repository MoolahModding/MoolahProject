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
    UFUNCTION()
    void OnOwnerOrderPushed(ASBZAIController* AIController, USBZAIOrder* AIOrder);
    
    UFUNCTION()
    void OnOwnerInteracted(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void OnHitByPlayer();
    
public:
    UFUNCTION()
    void OnAIPawnKilled();
    
};

