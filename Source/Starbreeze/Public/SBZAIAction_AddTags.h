#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIAction.h"
#include "SBZAIAction_AddTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_AddTags : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAdd;
    
public:
    USBZAIAction_AddTags();

};

