#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterAbilityData.h"
#include "SBZAICharacterAbilityData.generated.h"

UCLASS(Blueprintable)
class USBZAICharacterAbilityData : public USBZCharacterAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorHardnessV2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthDifficultyScaleArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDifficultyScaleArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthV2DifficultyScaleArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorV2DifficultyScaleArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorHardnessV2DifficultyScaleArray[4];
    
    USBZAICharacterAbilityData();

};

