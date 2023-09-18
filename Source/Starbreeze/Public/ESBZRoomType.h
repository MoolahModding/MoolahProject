#pragma once
#include "CoreMinimal.h"
#include "ESBZRoomType.generated.h"

UENUM(BlueprintType)
enum class ESBZRoomType : uint8 {
    None,
    Public,
    Private,
    Secure,
    MAX,
};

