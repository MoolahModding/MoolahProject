#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfig.h"
#include "SBZModularMeshContainer.h"
#include "SBZModularMeshData.h"
#include "SBZOverrideConfigWeaponMaterials.h"
#include "SBZWeaponPartDataCosmeticOverrideConfig.generated.h"

class USBZWeaponPartDataAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class USBZWeaponPartDataCosmeticOverrideConfig : public USBZEquippablePartConfig, public ISBZModularMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartDataAsset* OverriddenWeaponPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularMeshData> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMesh*, FSBZOverrideConfigWeaponMaterials> OverriddenWeaponMaterialPerMesh;
    
    USBZWeaponPartDataCosmeticOverrideConfig();


    // Fix for true pure virtual functions not being implemented
};

