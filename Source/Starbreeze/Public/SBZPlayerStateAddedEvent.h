#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZPlayerStateAddedEvent.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FSBZPlayerStateAddedEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    STARBREEZE_API FSBZPlayerStateAddedEvent();
};

