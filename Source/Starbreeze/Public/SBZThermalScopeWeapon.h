#pragma once
#include "CoreMinimal.h"
#include "SBZRangedWeapon.h"
#include "SBZThermalScopeWeapon.generated.h"

class ASBZAICharacter;
class UMaterialInstanceDynamic;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable)
class ASBZThermalScopeWeapon : public ASBZRangedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> ThermalMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAICharacter*> MarkedCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopeFOVMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OverskillHET5BlackTraceEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverskillHET5BlackTraceEffectLength;
    
public:
    ASBZThermalScopeWeapon(const FObjectInitializer& ObjectInitializer);

};

