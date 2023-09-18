#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLoginAuthFactorType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLoginAuthFactorType : uint8 {
    Authenticator,
    BackupCode,
};

