#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableAudioData.generated.h"

class UAkAudioEvent;
class USBZVoiceCommentDataAsset;

USTRUCT(BlueprintType)
struct FSBZInteractableAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    STARBREEZE_API FSBZInteractableAudioData();
};

