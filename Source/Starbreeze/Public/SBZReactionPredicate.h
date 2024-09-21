#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZReactionPredicate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInversed;
    
public:
    USBZReactionPredicate();

};

