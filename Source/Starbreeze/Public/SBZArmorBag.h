#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableArmorCharges.h"
#include "SBZArmorBag.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZArmorBag : public ASBZPlaceableArmorCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorChunkSizePerCharge;
    
public:
    ASBZArmorBag(const FObjectInitializer& ObjectInitializer);

};

