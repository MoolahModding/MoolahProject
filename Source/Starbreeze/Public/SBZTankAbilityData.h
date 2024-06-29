#pragma once
#include "CoreMinimal.h"
#include "SBZAICharacterAbilityData.h"
#include "SBZTankAbilityData.generated.h"

UCLASS(Blueprintable)
class USBZTankAbilityData : public USBZAICharacterAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Visor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisorHardness;
    
    USBZTankAbilityData();

};

