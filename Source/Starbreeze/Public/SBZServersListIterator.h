#pragma once
#include "CoreMinimal.h"
#include "SBZServersListIteratorBase.h"
#include "SBZServersListIterator.generated.h"

USTRUCT(BlueprintType)
struct FSBZServersListIterator : public FSBZServersListIteratorBase {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZServersListIterator();
};

