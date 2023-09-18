#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionDirection.h"
#include "SBZBoneHurtReaction.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneHurtReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZHurtReactionDirection> BoneMap;
    
    STARBREEZE_API FSBZBoneHurtReaction();
};

