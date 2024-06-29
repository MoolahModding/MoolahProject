#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "SBZAIAgilityTagEventNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZAIAgilityTagEventNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
public:
    USBZAIAgilityTagEventNotify();

};

