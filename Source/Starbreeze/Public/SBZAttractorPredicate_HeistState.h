#pragma once
#include "CoreMinimal.h"
#include "SBZAttractorPredicate.h"
#include "SBZAttractorPredicate_HeistState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate_HeistState : public USBZAttractorPredicate {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedHeistStates;
    
    USBZAttractorPredicate_HeistState();

};

