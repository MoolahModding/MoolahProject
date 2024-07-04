#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAttractorPredicate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAttractorPredicate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInversed;
    
    USBZAttractorPredicate();

};

