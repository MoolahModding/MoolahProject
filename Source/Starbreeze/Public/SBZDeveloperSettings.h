#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZDeveloperSettings.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USBZDeveloperSettings();

};

