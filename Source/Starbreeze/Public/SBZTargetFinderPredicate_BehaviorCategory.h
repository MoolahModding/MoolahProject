#pragma once
#include "CoreMinimal.h"
#include "SBZTargetFinderPredicate.h"
#include "SBZTargetFinderPredicate_BehaviorCategory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZTargetFinderPredicate_BehaviorCategory : public USBZTargetFinderPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedBehaviors;
    
public:
    USBZTargetFinderPredicate_BehaviorCategory();

};

