#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZGamepadBindingsPreset.h"
#include "SBZGamepadBindingsPresetsConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZGamepadBindingsPresetsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGamepadBindingsPreset> GamepadBindingsPresets;
    
    USBZGamepadBindingsPresetsConfig();

};

