#pragma once
#include "CoreMinimal.h"
#include "SBZTargetFinderPredicate.h"
#include "SBZTargetFinderPredicate_Linetrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZTargetFinderPredicate_Linetrace : public USBZTargetFinderPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsHit;
    
public:
    USBZTargetFinderPredicate_Linetrace();
};

