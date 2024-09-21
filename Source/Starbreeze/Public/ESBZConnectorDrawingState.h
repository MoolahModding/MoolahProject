#pragma once
#include "CoreMinimal.h"
#include "ESBZConnectorDrawingState.generated.h"

UENUM(BlueprintType)
enum class ESBZConnectorDrawingState : uint8 {
    Volumes,
    Doors,
    Components,
    Navlinks,
    Other,
};

