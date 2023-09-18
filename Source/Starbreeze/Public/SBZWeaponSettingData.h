#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressorEffectValue[4];
    
    STARBREEZE_API FSBZWeaponSettingData();
};

