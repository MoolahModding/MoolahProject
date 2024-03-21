#pragma once
#include "CoreMinimal.h"
#include "SBZRangedWeapon.h"
#include "SBZThermalScopeWeapon.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class ASBZThermalScopeWeapon : public ASBZRangedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> ThermalMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocketName;
    
public:
    ASBZThermalScopeWeapon();
};

