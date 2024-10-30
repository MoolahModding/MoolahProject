#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputSettings.h"
#include "SBZInputSettings.generated.h"

UCLASS(Blueprintable, Config=SBZInput)
class USBZInputSettings : public UInputSettings {
    GENERATED_BODY()
public:
    USBZInputSettings();

};

