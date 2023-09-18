#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZAIExplosiveWeakPoint.h"
#include "SBZAIGrenadeBelt.generated.h"

class UClass;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIGrenadeBelt : public USBZAIExplosiveWeakPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlayerGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> AIExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> PlayerExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageModifierCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStaggerDuration[4];
    
public:
    USBZAIGrenadeBelt();

};

