#pragma once
#include "CoreMinimal.h"
#include "EVerificationContext.generated.h"

UENUM(BlueprintType)
enum class EVerificationContext : uint8 {
    UserAccountRegistration,
    UpdateEmailAddress,
    upgradeHeadlessAccount,
};

