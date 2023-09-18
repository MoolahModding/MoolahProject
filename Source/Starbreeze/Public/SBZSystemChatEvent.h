#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZSystemChatEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZSystemChatEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    STARBREEZE_API FSBZSystemChatEvent();
};

