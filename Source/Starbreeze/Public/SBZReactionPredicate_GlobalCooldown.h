#pragma once
#include "CoreMinimal.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_GlobalCooldown.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_GlobalCooldown : public USBZReactionPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlobalCooldownKey;
    
public:
    USBZReactionPredicate_GlobalCooldown();

};

