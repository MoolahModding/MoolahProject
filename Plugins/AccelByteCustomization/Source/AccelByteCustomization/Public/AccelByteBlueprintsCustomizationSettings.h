#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteBlueprintsCustomizationSettings.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsCustomizationSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsCustomizationSettings();

    UFUNCTION(BlueprintCallable)
    static void SetChallengeServerUrl(const FString& ChallengeServerUrl);
    
    UFUNCTION(BlueprintCallable)
    static FString GetChallengeServerUrl();
    
};

