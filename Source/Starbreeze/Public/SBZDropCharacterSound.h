#pragma once
#include "CoreMinimal.h"
#include "SBZDropCharacterSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZDropCharacterSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DropRagdollSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DropHumanShieldSoundEvent;
    
    STARBREEZE_API FSBZDropCharacterSound();
};

