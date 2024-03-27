#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZUpscaler.h"
#include "ESBZUpscalingMode.h"
#include "SBZSettingsFunctions.h"
#include "SBZSettingsFunctionsVideo.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZSettingsFunctionsVideo : public USBZSettingsFunctions {
    GENERATED_BODY()
public:
    USBZSettingsFunctionsVideo();
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetWindowMode(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetVSyncEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetViewDistanceQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetUpscalingSharpness(UObject* WorldContextObject, float Sharpness);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetUpscalingMode(UObject* WorldContextObject, ESBZUpscalingMode Mode);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetUpscaler(UObject* WorldContextObject, ESBZUpscaler Mode);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetTextureQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetShadowQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetResolution(UObject* WorldContextObject, FIntPoint Resolution);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetRecommendedQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetPostProcessingQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMotionBlurEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMaterialsQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamma(UObject* WorldContextObject, float Gamma);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetFramerateLimit(UObject* WorldContextObject, int32 Limit);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetFoliageQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetEffectsQuality(UObject* WorldContextObject, int32 Value);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetDepthOfFieldEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetContrast(UObject* WorldContextObject, float Contrast);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetColorBlindStrength(UObject* WorldContextObject, float Strength);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetColorBlindMode(UObject* WorldContextObject, int32 Mode);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetCameraVerticalFieldOfView(UObject* WorldContextObject, float FoV);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetBrightness(UObject* WorldContextObject, float Brightness);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetAntiAliasingMode(UObject* WorldContextObject, int32 Mode);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsVSyncEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsVSyncEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsMotionBlurEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsMotionBlurEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsDepthOfFieldEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsDepthOfFieldEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetWindowMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetViewDistanceQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetUpscalingSharpness(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static ESBZUpscalingMode GetUpscalingMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static ESBZUpscaler GetUpscaler(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetTextureQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetShadowQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static FIntPoint GetResolution(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetPostProcessingQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetMaterialsQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamma(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetFramerateLimit(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetFoliageQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetEffectsQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultWindowMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultViewDistanceQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultUpscalingSharpness(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static ESBZUpscalingMode GetDefaultUpscalingMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static ESBZUpscaler GetDefaultUpscaler(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultTextureQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultShadowQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static FIntPoint GetDefaultResolution(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultPostProcessingQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultMaterialsQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultGamma(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultFramerateLimit(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultFoliageQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultEffectsQuality(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultContrast(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultColorBlindStrength(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultColorBlindMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultCameraVerticalFieldOfView(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultBrightness(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetDefaultAntiAliasingMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetContrast(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetColorBlindStrength(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetColorBlindMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetCameraVerticalFieldOfView(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool GetButtonVisibilityUpscalingSharpness(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool GetButtonVisibilityUpscalingMode(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetBrightness(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static int32 GetAntiAliasingMode(UObject* WorldContextObject);
    
};

