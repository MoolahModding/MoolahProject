#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZUtilityLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class SBZUTILITYPLUGIN_API USBZUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZUtilityLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(UObject* WorldContextObject);
    
};

