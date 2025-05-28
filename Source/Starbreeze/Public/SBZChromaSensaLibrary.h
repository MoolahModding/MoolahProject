#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZChromaSensaLibrary.generated.h"

class USBZChromaSensaEffectDataAsset;

UCLASS(Blueprintable)
class USBZChromaSensaLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZChromaSensaLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopChromaSensaEffect(USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void SetChromaIdleEffect(USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void PlayChromaSensaEffect(USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void EnableChromaSensa(bool bEnable);
    
};

