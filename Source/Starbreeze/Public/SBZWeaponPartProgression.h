#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartProgressionData.h"
#include "SBZWeaponPartProgression.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponPartProgression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProgressionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPartProgressionData> WeaponPartData;
    
    STARBREEZE_API FSBZWeaponPartProgression();
};

