#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBZVoicePriority.h"
#include "SBZVoiceCommentNotify.generated.h"

class UAkAudioEvent;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, CollapseCategories)
class USBZVoiceCommentNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDialogEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DialogEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
public:
    USBZVoiceCommentNotify();

};

