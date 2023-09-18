#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogPerformer.h"
#include "SBZDialogLineDefinition.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZDialogLineDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDialogPerformer Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    STARBREEZE_API FSBZDialogLineDefinition();
};

