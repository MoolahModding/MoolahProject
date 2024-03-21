#pragma once
#include "CoreMinimal.h"
#include "SBZHealthPlaceable.h"
#include "SBZDoctorBag.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZDoctorBag : public ASBZHealthPlaceable {
    GENERATED_BODY()
public:
    ASBZDoctorBag();
};

