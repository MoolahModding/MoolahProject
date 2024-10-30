#pragma once
#include "CoreMinimal.h"
#include "SBZDroneVoiceInfoCallback.generated.h"

class USBZHoldOutDroneVoiceComponent;

USTRUCT(BlueprintType)
struct FSBZDroneVoiceInfoCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZHoldOutDroneVoiceComponent* VoiceComponent;
    
    STARBREEZE_API FSBZDroneVoiceInfoCallback();
};

