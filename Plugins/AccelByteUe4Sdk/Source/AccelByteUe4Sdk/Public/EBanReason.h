#pragma once
#include "CoreMinimal.h"
#include "EBanReason.generated.h"

UENUM(BlueprintType)
enum class EBanReason : uint8 {
    EMPTY,
    VIOLENCE,
    HARASSMENT,
    HATEFUL_CONDUCT,
    OFFENSIVE_USERNAME,
    IMPERSONATION,
    MALICIOUS_CONTENT,
    SEXUALLY_SUGGESTIVE,
    SEXUAL_VIOLENCE,
    EXTREME_VIOLENCE,
    UNDERAGE_USER,
    CHEATING,
    TOS_VIOLATION,
};

