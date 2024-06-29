#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "SBZBTDecorator_FriendlyFire.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_FriendlyFire : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    USBZBTDecorator_FriendlyFire();

};

