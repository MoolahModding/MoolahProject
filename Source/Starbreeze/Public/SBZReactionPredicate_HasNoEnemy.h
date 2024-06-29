#pragma once
#include "CoreMinimal.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_HasNoEnemy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_HasNoEnemy : public USBZReactionPredicate {
    GENERATED_BODY()
public:
    USBZReactionPredicate_HasNoEnemy();

};

