#pragma once
#include "CoreMinimal.h"
#include "EAccelByteChatRoomType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteChatRoomType : uint8 {
    NORMAL,
    PERSONAL,
    PARTY_V2,
    PARTY_V1,
    SESSION_V2,
};

