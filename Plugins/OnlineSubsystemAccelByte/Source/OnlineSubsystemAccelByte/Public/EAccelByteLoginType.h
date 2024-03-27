#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLoginType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLoginType : uint8 {
    None,
    DeviceId,
    AccelByte,
    Xbox,
    PS4,
    PS5,
    Launcher,
    Steam,
    EOS,
    ExchangeCode,
    PublisherCode,
    RefreshToken,
    CachedToken,
};

