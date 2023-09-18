#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZVotingChatEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZVotingChatEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    STARBREEZE_API FSBZVotingChatEvent();
};

