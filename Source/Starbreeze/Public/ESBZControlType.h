#pragma once
#include "CoreMinimal.h"
#include "ESBZControlType.generated.h"

UENUM(BlueprintType)
enum class ESBZControlType : uint8 {
    ActionClick,
    Toggle,
    MultipleChoice,
    FramerateChoice,
    GamepadPresetChoice,
    ResolutionChoice,
    AntiAliasingModeChoice,
    UpscalerChoice,
    UpscalingModeChoice,
    FrameInterpolatorChoice,
    Slider,
    KeyboardInputBinding,
    GamepadInputBinding,
    StringControl,
    ColorControl,
};

