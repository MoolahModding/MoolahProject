#pragma once
#include "CoreMinimal.h"
#include "ESBZBoneAnimConstraintType.h"
#include "SBZBoneAnimContraint.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneAnimContraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToConstrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBoneAnimConstraintType ConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToFollow;
    
    STARBREEZE_API FSBZBoneAnimContraint();
};

