#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZArmorRepairKit.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZArmorRepairKit : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
    ASBZArmorRepairKit(const FObjectInitializer& ObjectInitializer);

};

