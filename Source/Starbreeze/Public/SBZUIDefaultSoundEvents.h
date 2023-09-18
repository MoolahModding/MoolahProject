#pragma once
#include "CoreMinimal.h"
#include "SBZUIDefaultSoundEvents.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZUIDefaultSoundEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonFocusedEvent;
    
    STARBREEZE_API FSBZUIDefaultSoundEvents();
};

