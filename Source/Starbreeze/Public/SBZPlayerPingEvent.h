#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerPingEvent.generated.h"

class APlayerState;
class USBZShoutTargetComponent;

USTRUCT(BlueprintType)
struct FSBZPlayerPingEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutTargetComponent* ShoutoutTarget;
    
    STARBREEZE_API FSBZPlayerPingEvent();
};

