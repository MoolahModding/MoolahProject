#pragma once
#include "CoreMinimal.h"
#include "ESBZControlType.generated.h"

UENUM(BlueprintType)
enum class ESBZControlType : uint8 {
    Toggle,
    MultipleChoice,
    FramerateChoice,
    GamepadPresetChoice,
    ResolutionChoice,
    DLSSSRModeChoice,
    Slider,
    KeyboardInputBinding,
    GamepadInputBinding,
    StringControl,
    ColorControl,
};

