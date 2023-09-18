#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Fonts/SlateFontInfo.h"
#include "ESBZWidgetZOrdering.h"
#include "SBZHUDNotificationData.h"
#include "SBZUIStatics.generated.h"

class UAkAudioEvent;
class UObject;
class USBZUIManager;
class UWidget;

UCLASS(Blueprintable)
class USBZUIStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZUIStatics();

    UFUNCTION(BlueprintCallable)
    static void Stop2DSound(UPARAM(Ref) int32& SoundID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowDebugObjective(const UObject* WorldContextObject, const FText& InTextToPrint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUIInDefaultMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUIInCinematicMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintSubtitle(const UObject* WorldContextObject, const FString& StringToPrint, FLinearColor Colour, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 Play2DSound(const UObject* WorldContextObject, UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    static void LogUiVerbose(const FString& LogText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWidgetActuallyVisible(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputTypeController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWidgetZOrderValue(ESBZWidgetZOrdering ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZUIManager* GetUIManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMaxDifficultyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMapName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateFontInfo GetGlobalFont(UObject* WorldContextObject, FName FontName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetGlobalColor(UObject* WorldContextObject, FName ColorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentProgressionSaveGameVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatIntToTimerText(int32 IntToConvert, bool bAlwaysDisplayHours);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatIntToText(int32 IntToConvert, int32 Integral, int32 Precision);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisplayHUDNotification(const UObject* WorldContextObject, const FSBZHUDNotificationData& HUDNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ClampText(const FText& InText, int32 MaxCharacters, bool bAddElipses);
    
};

