#pragma once
#include "CoreMinimal.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_HasEnemy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_HasEnemy : public USBZReactionPredicate {
    GENERATED_BODY()
public:
    USBZReactionPredicate_HasEnemy();
};

