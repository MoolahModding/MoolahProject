#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_AbortOnPositionChange.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SBZBTDecorator_AbortOnPositionChange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UDEPRECATED_SBZBTDecorator_AbortOnPositionChange();

};

