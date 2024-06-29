#pragma once
#include "CoreMinimal.h"
#include "SBZEquippable.h"
#include "SBZHandheldEquippable.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZHandheldEquippable : public ASBZEquippable {
    GENERATED_BODY()
public:
    ASBZHandheldEquippable(const FObjectInitializer& ObjectInitializer);

};

