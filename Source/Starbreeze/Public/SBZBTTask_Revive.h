#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_Revive.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_Revive : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_Revive();

};

