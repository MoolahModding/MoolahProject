#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransform.h"
#include "SkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh;
    
    FSkelMeshMergeUVTransformMapping();
};

