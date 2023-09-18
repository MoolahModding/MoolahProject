#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkelMeshMergeUVTransform.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSkelMeshMergeUVTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> UVTransforms;
    
    FSkelMeshMergeUVTransform();
};

