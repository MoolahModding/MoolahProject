#pragma once
#include "CoreMinimal.h"
#include "EAccelByteFileType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteFileType : uint8 {
    JPEG,
    JPG,
    PNG,
    BMP,
    GIF,
    MP3,
    BIN,
    WEBP,
};

