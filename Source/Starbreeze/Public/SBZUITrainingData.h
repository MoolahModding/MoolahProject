#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableConfig.h"
#include "SBZWeaponStats.h"
#include "SBZUITrainingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZUITrainingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponStats WantedStats;
    
    STARBREEZE_API FSBZUITrainingData();
};

