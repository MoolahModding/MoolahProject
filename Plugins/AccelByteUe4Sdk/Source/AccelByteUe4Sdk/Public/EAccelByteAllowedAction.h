#pragma once
#include "CoreMinimal.h"
#include "EAccelByteAllowedAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteAllowedAction : uint8 {
    None,
    createGroup,
    joinGroup,
    inviteUser,
    kickUser,
    leaveGroup,
    responseJoinRequest,
};

