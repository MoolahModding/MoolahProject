#pragma once
#include "CoreMinimal.h"
#include "SBZBTDecorator_TargetIsNear.h"
#include "SBZBTDecorator_EscortShouldBeWarned.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_EscortShouldBeWarned : public USBZBTDecorator_TargetIsNear {
    GENERATED_BODY()
public:
    USBZBTDecorator_EscortShouldBeWarned();
};

