#pragma once
#include "CoreMinimal.h"
#include "SBZAIAlertnessComment.generated.h"

class USBZVoiceCommentDataAsset;

USTRUCT(BlueprintType)
struct FSBZAIAlertnessComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* RaisedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* LoweredTo;
    
    STARBREEZE_API FSBZAIAlertnessComment();
};

