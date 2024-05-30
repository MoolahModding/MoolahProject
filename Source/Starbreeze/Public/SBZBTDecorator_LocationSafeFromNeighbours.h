#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_LocationSafeFromNeighbours.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_LocationSafeFromNeighbours : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTDecorator_LocationSafeFromNeighbours();

};

