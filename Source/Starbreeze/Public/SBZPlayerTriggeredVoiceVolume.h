#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogEndedReason.h"
#include "SBZOnVoiceVolumeDialogEndedDelegateDelegate.h"
#include "SBZPlayerTriggerVolume.h"
#include "SBZPlayerTriggeredVoiceVolume.generated.h"

class USBZDialogDataAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class ASBZPlayerTriggeredVoiceVolume : public ASBZPlayerTriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* Comment;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnVoiceVolumeDialogEndedDelegate DialogEnded;
    
public:
    ASBZPlayerTriggeredVoiceVolume();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDialogEnded(ESBZDialogEndedReason Reason);
    
};

