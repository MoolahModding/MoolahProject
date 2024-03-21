#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZAmmoBag.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZAmmoBag : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfMagazinesPerCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfGrenadesPerCharge;
    
public:
    ASBZAmmoBag();
};

