#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneSoundAndPriority.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneSoundAndPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    STARBREEZE_API FSBZHoldOutDroneSoundAndPriority();
};

