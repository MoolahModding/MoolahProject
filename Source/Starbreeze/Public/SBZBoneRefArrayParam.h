#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SBZBoneRefArrayParam.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneRefArrayParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> BoneRefArray;
    
    STARBREEZE_API FSBZBoneRefArrayParam();
};

