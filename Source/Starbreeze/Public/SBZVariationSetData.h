#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZCustomPrimitiveData.h"
#include "SBZVariationSetData.generated.h"

class UDataTable;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API USBZVariationSetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CDPFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCustomPrimitiveData> Variations;
    
    USBZVariationSetData();

};

