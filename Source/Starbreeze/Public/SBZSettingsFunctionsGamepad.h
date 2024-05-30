#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "SBZSettingsFunctions.h"
#include "SBZSettingsFunctionsGamepad.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZSettingsFunctionsGamepad : public USBZSettingsFunctions {
    GENERATED_BODY()
public:
    USBZSettingsFunctionsGamepad();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGamepadBindingsPreset(UObject* WorldContextObject, int32 Preset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGamepadBinding(UObject* WorldContextObject, FInputChord Binding, FName ActionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGamepadBindingsPreset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetGamepadBinding(UObject* WorldContextObject, FName ActionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultGamepadBindingsPreset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInputChord GetDefaultGamepadBinding(UObject* WorldContextObject, FName ActionName);
    
};

