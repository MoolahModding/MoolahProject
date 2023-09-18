#pragma once
#include "CoreMinimal.h"
#include "SBZBoneHurtReaction.h"
#include "SBZHurtReactionPose.generated.h"

USTRUCT(BlueprintType)
struct FSBZHurtReactionPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneHurtReaction Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneHurtReaction Crouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneHurtReaction LyingOnFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBoneHurtReaction LyingOnBack;
    
    STARBREEZE_API FSBZHurtReactionPose();
};

