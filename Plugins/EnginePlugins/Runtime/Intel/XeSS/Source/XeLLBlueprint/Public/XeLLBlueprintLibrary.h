#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeLLMode.h"
#include "XeLLBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UXeLLBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeLLBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeLLMode(const EXeLLMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlashIndicatorEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXeLLSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeLLMode GetXeLLMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EXeLLMode> GetSupportedXeLLModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSimulationLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderSubmitLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPresentLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLatencyMarkEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInputLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFlashIndicatorEnabled();
    
};

