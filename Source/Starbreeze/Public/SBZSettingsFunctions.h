#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSettingsFunctions.generated.h"

UCLASS(Blueprintable)
class USBZSettingsFunctions : public UObject {
    GENERATED_BODY()
public:
    USBZSettingsFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetButtonVisibilityAlways(UObject* WorldContextObject);
    
};

