#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_TargetIsValid.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_TargetIsValid : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTDecorator_TargetIsValid();

};

