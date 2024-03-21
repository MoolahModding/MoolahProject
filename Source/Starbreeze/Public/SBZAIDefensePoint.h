#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrderTargetArea.h"
#include "SBZAIDefensePoint.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZAIDefensePoint : public ASBZAIOrderTargetArea {
    GENERATED_BODY()
public:
    ASBZAIDefensePoint();
};

