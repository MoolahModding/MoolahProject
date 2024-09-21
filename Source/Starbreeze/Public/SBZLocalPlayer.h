#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SBZLocalPlayer.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Engine)
class USBZLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USBZLocalPlayer();

};

