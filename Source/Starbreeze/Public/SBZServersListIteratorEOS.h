#pragma once
#include "CoreMinimal.h"
#include "SBZServersListIteratorBase.h"
#include "SBZServersListIteratorEOS.generated.h"

USTRUCT(BlueprintType)
struct FSBZServersListIteratorEOS : public FSBZServersListIteratorBase {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZServersListIteratorEOS();
};

