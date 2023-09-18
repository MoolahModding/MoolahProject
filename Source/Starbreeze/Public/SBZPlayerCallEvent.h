#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerCallEvent.generated.h"

class ASBZPlayerState;
class USBZPingCallAsset;

USTRUCT(BlueprintType)
struct FSBZPlayerCallEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPingCallAsset* Call;
    
    STARBREEZE_API FSBZPlayerCallEvent();
};

