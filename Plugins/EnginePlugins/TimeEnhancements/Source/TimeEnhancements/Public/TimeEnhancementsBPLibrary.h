#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimeEnhancementsBPLibrary.generated.h"

UCLASS(Blueprintable)
class UTimeEnhancementsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeEnhancementsBPLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SixtyFramesPerSecondFrameDuration();
    
};

