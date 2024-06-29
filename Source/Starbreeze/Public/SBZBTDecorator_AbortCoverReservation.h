#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_AbortCoverReservation.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_AbortCoverReservation : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTDecorator_AbortCoverReservation();

};

