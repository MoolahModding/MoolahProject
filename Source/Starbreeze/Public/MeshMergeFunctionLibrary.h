#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkeletalMeshMergeParams.h"
#include "MeshMergeFunctionLibrary.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class STARBREEZE_API UMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshMergeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
    
};

