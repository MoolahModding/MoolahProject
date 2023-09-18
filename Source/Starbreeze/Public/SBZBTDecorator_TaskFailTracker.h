#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_TaskFailTracker.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_TaskFailTracker : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_TaskFailTracker();

};

