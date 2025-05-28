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
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDifficultyScaleArray[4];
    
    USBZAICharacterAbilityData();

};

