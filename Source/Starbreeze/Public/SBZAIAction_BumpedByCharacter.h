#pragma once
#include "CoreMinimal.h"
#include "ESBZVoicePriority.h"
#include "SBZAIAction.h"
#include "SBZAIAction_BumpedByCharacter.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_BumpedByCharacter : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
public:
    USBZAIAction_BumpedByCharacter();

};

