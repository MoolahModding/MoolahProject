#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerLookAtTrigger.h"
#include "SBZPlayerLookAtTriggeredVoice.generated.h"

class USBZDialogDataAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class ASBZPlayerLookAtTriggeredVoice : public ASBZPlayerLookAtTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* Comment;
    
public:
    ASBZPlayerLookAtTriggeredVoice(const FObjectInitializer& ObjectInitializer);

};

