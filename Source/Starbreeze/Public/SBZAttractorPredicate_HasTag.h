#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAttractorPredicate.h"
#include "SBZAttractorPredicate_HasTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate_HasTag : public USBZAttractorPredicate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttractorTags;
    
    USBZAttractorPredicate_HasTag();

};

