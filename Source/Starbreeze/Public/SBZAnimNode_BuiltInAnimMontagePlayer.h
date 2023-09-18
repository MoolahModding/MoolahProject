#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "SBZAnimNode_BuiltInAnimMontagePlayer.generated.h"

class USBZBuiltInAnimMontagesHandler;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAnimNode_BuiltInAnimMontagePlayer : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> BonesToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBuiltInAnimMontagesHandler* AnimMontagesHandler;
    
    FSBZAnimNode_BuiltInAnimMontagePlayer();
};

