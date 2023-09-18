#pragma once
#include "CoreMinimal.h"
#include "ESBZCuttingMaterialTier.h"
#include "SBZCutterSkillSettingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCutterSkillSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CuttingDurationDecreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCuttingMaterialTier MinCuttingMaterialTierBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoIncreaseAcedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CuttingDurationDecreaseMastery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCuttingMaterialTier MinCuttingMaterialTierUpgrade01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoIncreaseUpgrade03;
    
    STARBREEZE_API FSBZCutterSkillSettingData();
};

