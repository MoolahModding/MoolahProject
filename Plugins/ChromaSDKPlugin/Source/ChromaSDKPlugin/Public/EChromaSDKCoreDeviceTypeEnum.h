#pragma once
#include "CoreMinimal.h"
#include "EChromaSDKCoreDeviceTypeEnum.generated.h"

UENUM(BlueprintType)
namespace EChromaSDKCoreDeviceTypeEnum {
    enum Type {
        UNASSIGNED_INVALID,
        DEVICE_KEYBOARD,
        DEVICE_MOUSE,
        DEVICE_HEADSET,
        DEVICE_MOUSEPAD,
        DEVICE_KEYPAD,
        DEVICE_SYSTEM,
        DEVICE_SPEAKERS,
        DEVICE_CHROMALINK,
        DEVICE_ALL = 255,
        INVALID,
    };
}

