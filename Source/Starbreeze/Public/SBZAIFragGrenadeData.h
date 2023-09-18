#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZFragGrenadeData.h"
#include "SBZAIFragGrenadeData.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class USBZAIFragGrenadeData : public USBZFragGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageModifierCurve;
    
    USBZAIFragGrenadeData();

};

