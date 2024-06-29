#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZAIExplosiveWeakPoint.h"
#include "Templates/SubclassOf.h"
#include "SBZAIGrenadeBelt.generated.h"

class UCurveFloat;
class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIGrenadeBelt : public USBZAIExplosiveWeakPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> AIExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> PlayerExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageModifierCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStaggerDuration[4];
    
public:
    USBZAIGrenadeBelt(const FObjectInitializer& ObjectInitializer);

};

