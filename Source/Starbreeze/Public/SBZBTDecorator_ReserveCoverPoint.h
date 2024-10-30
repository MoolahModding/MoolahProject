#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_ReserveCoverPoint.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_ReserveCoverPoint : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTDecorator_ReserveCoverPoint();

};

