#pragma once
#include "CoreMinimal.h"
#include "SBZAICharacterAbilityData.h"
#include "SBZAICrewCharacterAbilityData.generated.h"

UCLASS(Blueprintable)
class USBZAICrewCharacterAbilityData : public USBZAICharacterAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefeatDownedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefeatCuffedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealth;
    
    USBZAICrewCharacterAbilityData();

};

