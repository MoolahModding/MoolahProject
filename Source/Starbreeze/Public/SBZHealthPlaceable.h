#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZHealthPlaceable.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZHealthPlaceable : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthGainedPerCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialCharges;
    
public:
    ASBZHealthPlaceable();
};

