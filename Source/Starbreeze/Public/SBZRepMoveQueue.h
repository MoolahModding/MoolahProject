#pragma once
#include "CoreMinimal.h"
#include "SBZAgentState.h"
#include "SBZRepMoveQueue.generated.h"

USTRUCT(BlueprintType)
struct FSBZRepMoveQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgentState> RepMoves;
    
    STARBREEZE_API FSBZRepMoveQueue();
};

