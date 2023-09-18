#pragma once
#include "CoreMinimal.h"
#include "SBZOverrideConfigWeaponMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSBZOverrideConfigWeaponMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> WeaponMaterialPerMesh;
    
    STARBREEZE_API FSBZOverrideConfigWeaponMaterials();
};

