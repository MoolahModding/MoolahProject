#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeFGMode.h"
#include "XeFGBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UXeFGBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeFGBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeFGMode(EXeFGMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXeFGSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IfRelaunchRequiredByXeFG();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeFGMode GetXeFGMode();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EXeFGMode> GetSupportedXeFGModes();
    
};

