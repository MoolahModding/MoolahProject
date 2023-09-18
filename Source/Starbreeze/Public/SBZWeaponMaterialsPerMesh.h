#pragma once
#include "CoreMinimal.h"
#include "SBZOverrideConfigWeaponMaterials.h"
#include "SBZWeaponMaterialsPerMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSBZWeaponMaterialsPerMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMesh*, FSBZOverrideConfigWeaponMaterials> WeaponMaterialPerMesh;
    
    STARBREEZE_API FSBZWeaponMaterialsPerMesh();
};

