#pragma once
#include "CoreMinimal.h"
#include "SBZVoiceEventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZVoiceEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwitchGroup;
    
    STARBREEZE_API FSBZVoiceEventData();
};

