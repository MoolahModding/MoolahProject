#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBZBTDecorator_UtilityCriticalSection.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_UtilityCriticalSection : public UBTDecorator {
    GENERATED_BODY()
public:
    USBZBTDecorator_UtilityCriticalSection();

};

