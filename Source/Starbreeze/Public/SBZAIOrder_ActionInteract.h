#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_LifeAction.h"
#include "SBZAIOrder_ActionInteract.generated.h"

class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_ActionInteract : public USBZAIOrder_LifeAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* OnStartedComment;
    
public:
    USBZAIOrder_ActionInteract();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLASlotStarted(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot);
    
};

