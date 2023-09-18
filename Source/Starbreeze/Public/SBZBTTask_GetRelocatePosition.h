#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_GetRelocatePosition.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_GetRelocatePosition : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_GetRelocatePosition();

};

