#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponProgressionStats.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponProgressionStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponProgressionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponProgressionPoints;
    
    FSBZWeaponProgressionStats();
};

