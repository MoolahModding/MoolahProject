#pragma once
#include "CoreMinimal.h"
#include "AkSpeakerConfiguration.generated.h"

UENUM()
enum class AkSpeakerConfiguration {
    Ak_Speaker_Front_Left = 1,
    Ak_Speaker_Front_Right,
    Ak_Speaker_Front_Center = 4,
    Ak_Speaker_Low_Frequency = 8,
    Ak_Speaker_Back_Left = 16,
    Ak_Speaker_Back_Right = 32,
    Ak_Speaker_Back_Center = 256,
    Ak_Speaker_Side_Left = 512,
    Ak_Speaker_Side_Right = 1024,
    Ak_Speaker_Top = 2048,
    Ak_Speaker_Height_Front_Left = 4096,
    Ak_Speaker_Height_Front_Center = 8192,
    Ak_Speaker_Height_Front_Right = 16384,
    Ak_Speaker_Height_Back_Left = 32768,
    Ak_Speaker_Height_Back_Center = 65536,
    Ak_Speaker_Height_Back_Right = 131072,
};

