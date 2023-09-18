#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "SBZBoneRefArrayParam.h"
#include "SBZAnimNode_BoneKeepRefPose.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BoneKeepRefPose : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneRefArrayParam BonesToConstrain;
    
    FSBZAnimNode_BoneKeepRefPose();
};

