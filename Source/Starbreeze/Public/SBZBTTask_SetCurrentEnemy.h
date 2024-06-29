#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_SetCurrentEnemy.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_SetCurrentEnemy : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_SetCurrentEnemy();

};

