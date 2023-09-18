#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_LifeAction.h"
#include "SBZAIOrder_ActionInteract.generated.h"

class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_ActionInteract : public USBZAIOrder_LifeAction {
    GENERATED_BODY()
public:
    USBZAIOrder_ActionInteract();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLASlotStarted(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
};

