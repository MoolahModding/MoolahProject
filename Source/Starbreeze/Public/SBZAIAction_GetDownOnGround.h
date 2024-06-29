#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIAction.h"
#include "SBZAIAction_GetDownOnGround.generated.h"

class ASBZAICharacter;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_GetDownOnGround : public USBZAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer QueueGoDownTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AICharacterOwner;
    
public:
    USBZAIAction_GetDownOnGround();

};

