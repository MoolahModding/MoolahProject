#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerRuntime.h"
#include "SBZDamageStatusMarkerRuntime.generated.h"

USTRUCT(BlueprintType)
struct FSBZDamageStatusMarkerRuntime : public FSBZMarkerRuntime {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZDamageStatusMarkerRuntime();
};

