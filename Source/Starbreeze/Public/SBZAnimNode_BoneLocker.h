#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "SBZBoneLocker.h"
#include "SBZAnimNode_BoneLocker.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BoneLocker : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBoneLocker> BoneLockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComponentSpace;
    
    FSBZAnimNode_BoneLocker();
};

