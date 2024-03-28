#pragma once
#include "CoreMinimal.h"
#include "SBZVoiceInfoCallback.generated.h"

class USBZCharacterVoiceComponent;

USTRUCT(BlueprintType)
struct FSBZVoiceInfoCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
    STARBREEZE_API FSBZVoiceInfoCallback();
};

