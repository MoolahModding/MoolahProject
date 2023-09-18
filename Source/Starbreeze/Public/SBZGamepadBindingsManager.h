#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "SBZGamepadBindingsManager.generated.h"

class USBZGamepadBindingsManager;
class USBZGamepadBindingsPresetsConfig;

UCLASS(Blueprintable)
class USBZGamepadBindingsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGamepadBindingsPresetsConfig* GamepadBindingsPresetsConfig;
    
    USBZGamepadBindingsManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGamepadBindingsManager* GetGamepadBindingsManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetBindingNamesLocalized(const FKey& InKey);
    
};

