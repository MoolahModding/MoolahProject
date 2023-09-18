#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZModGripAnimData.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class USBZModGripAnimData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideRightGripFPPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideLeftGripFPPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideRightGripTPPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideLeftGripTPPose;
    
    USBZModGripAnimData();

};

