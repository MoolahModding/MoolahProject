#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZAICrewChatEvent.generated.h"

class ASBZAICrewState;

USTRUCT(BlueprintType)
struct FSBZAICrewChatEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAICrewState* CrewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    STARBREEZE_API FSBZAICrewChatEvent();
};

