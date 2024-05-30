#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_DropAttachedLoot.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_DropAttachedLoot : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTTask_DropAttachedLoot();

};

