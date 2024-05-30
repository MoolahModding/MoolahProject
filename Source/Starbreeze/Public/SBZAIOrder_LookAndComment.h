#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_LookAndComment.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_LookAndComment : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetActorLocation;
    
public:
    USBZAIOrder_LookAndComment();

};

