#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZPingCallAsset.generated.h"

class UPaperSprite;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZPingCallAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* CallIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* CallComment;
    
    USBZPingCallAsset();

};

