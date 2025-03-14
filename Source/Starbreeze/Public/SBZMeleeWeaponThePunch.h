#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeWeapon.h"
#include "SBZMeleeWeaponThePunch.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class ASBZMeleeWeaponThePunch : public ASBZMeleeWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BloodProgressionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BloodMaterialIndex;
    
public:
    ASBZMeleeWeaponThePunch(const FObjectInitializer& ObjectInitializer);

};

