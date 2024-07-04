#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZArmorBag.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZArmorBag : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorChunkSizePerCharge;
    
public:
    ASBZArmorBag(const FObjectInitializer& ObjectInitializer);

};

