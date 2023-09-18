#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SceneTypes.h"
#include "SBZSkeletalMeshInfos.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSBZSkeletalMeshInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> BoneSpaceTransforms;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomPrimitiveData CustomPrimitiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    STARBREEZE_API FSBZSkeletalMeshInfos();
};

