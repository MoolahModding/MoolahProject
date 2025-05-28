#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZPlaceableArmorCharges.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableArmorCharges : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
    ASBZPlaceableArmorCharges(const FObjectInitializer& ObjectInitializer);

};

