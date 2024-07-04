#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_ClearBBValue.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_ClearBBValue : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_ClearBBValue();

};

