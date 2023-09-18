#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "SBZDebugCameraController.generated.h"

UCLASS(Blueprintable)
class ASBZDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    ASBZDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

