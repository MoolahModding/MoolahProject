#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableArmorCharges.h"
#include "SBZArmorRepairKit.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZArmorRepairKit : public ASBZPlaceableArmorCharges {
    GENERATED_BODY()
public:
    ASBZArmorRepairKit(const FObjectInitializer& ObjectInitializer);

};

