#pragma once
#include "CoreMinimal.h"
#include "ESBZLoginCode.generated.h"

UENUM(BlueprintType)
enum class ESBZLoginCode : uint8 {
    Success,
    LoginFailed,
    NebulaConnectionFailed,
    LoginBadRequest,
    LoginUnauthorized,
    LoginWrongCreds,
    LoginLinkingTokenNotFound,
    LoginLinkingDiffNAccount,
    LoginPlayerBanned,
    LoginHttpError500,
};

