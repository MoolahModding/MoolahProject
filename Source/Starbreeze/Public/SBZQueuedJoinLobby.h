#pragma once
#include "CoreMinimal.h"
#include "SBZArmadaInfo.h"
#include "SBZFriendListEntry.h"
#include "SBZQueuedJoinLobby.generated.h"

USTRUCT(BlueprintType)
struct FSBZQueuedJoinLobby {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFriendListEntry FriendEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZArmadaInfo ArmadaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasQueuedJoinLobby;
    
    STARBREEZE_API FSBZQueuedJoinLobby();
};

