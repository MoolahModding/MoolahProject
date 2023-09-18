#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponTargetingOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponTargetingOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingXAxisOffset;
    
    STARBREEZE_API FSBZWeaponTargetingOverrideData();
};

