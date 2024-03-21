#pragma once
#include "CoreMinimal.h"
#include "SBZQueuedJoinLobby.generated.h"

class USBZStateMachineDataMatchmaking;

USTRUCT(BlueprintType)
struct FSBZQueuedJoinLobby {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasQueuedJoinLobby;
    
    STARBREEZE_API FSBZQueuedJoinLobby();
};

