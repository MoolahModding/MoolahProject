#pragma once
#include "CoreMinimal.h"
#include "ESetByMetadataRecord.generated.h"

UENUM(BlueprintType)
enum class ESetByMetadataRecord : uint8 {
    NONE,
    SERVER,
    CLIENT,
};

