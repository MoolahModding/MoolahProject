#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SBZLocalPlayer.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NonTransient)
class USBZLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USBZLocalPlayer();

};

