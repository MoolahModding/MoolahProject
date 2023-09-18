#pragma once
#include "CoreMinimal.h"
#include "ESBZRoomScanningType.generated.h"

UENUM(BlueprintType)
enum class ESBZRoomScanningType : uint8 {
    None,
    Static,
    Moving,
};

