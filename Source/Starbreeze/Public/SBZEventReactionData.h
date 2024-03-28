#pragma once
#include "CoreMinimal.h"
#include "SBZEventReactionData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZEventReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayedTime;
    
    STARBREEZE_API FSBZEventReactionData();
};

