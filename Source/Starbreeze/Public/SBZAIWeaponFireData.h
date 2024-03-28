#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZWeaponFireData.h"
#include "SBZAIWeaponFireData.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIWeaponFireData : public USBZWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> ChanceToHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AccuracyModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredTimeToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BurtsSelectionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstRandomization;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PreferredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageAccuracyModified;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSliceProjectiles;
    
    USBZAIWeaponFireData();
};

