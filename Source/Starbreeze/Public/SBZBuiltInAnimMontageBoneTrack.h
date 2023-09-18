#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "SBZBuiltInAnimMontageValueTrack.h"
#include "SBZBuiltInAnimMontageBoneTrack.generated.h"

USTRUCT(BlueprintType)
struct FSBZBuiltInAnimMontageBoneTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneModificationMode> BoneModificationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuiltInAnimMontageValueTrack> ValueTracks;
    
    STARBREEZE_API FSBZBuiltInAnimMontageBoneTrack();
};

