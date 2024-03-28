#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZWeaponWearAndTearData.generated.h"

UCLASS(Blueprintable)
class USBZWeaponWearAndTearData : public USBZCosmeticsDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 WearAndTearLevel;
    
    USBZWeaponWearAndTearData();
};

