#include "SBZSettingsFunctionsVideo.h"

USBZSettingsFunctionsVideo::USBZSettingsFunctionsVideo() {
}

void USBZSettingsFunctionsVideo::SetWindowMode(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetVSyncEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void USBZSettingsFunctionsVideo::SetViewDistanceQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetUpscalingSharpness(UObject* WorldContextObject, float Sharpness) {
}

void USBZSettingsFunctionsVideo::SetUpscalingMode(UObject* WorldContextObject, ESBZUpscalingMode Mode) {
}

void USBZSettingsFunctionsVideo::SetUpscaler(UObject* WorldContextObject, ESBZUpscaler Mode) {
}

void USBZSettingsFunctionsVideo::SetTextureQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetShadowQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetResolution(UObject* WorldContextObject, FIntPoint Resolution) {
}

void USBZSettingsFunctionsVideo::SetReflexMode(UObject* WorldContextObject, ESBZReflexMode Mode) {
}

void USBZSettingsFunctionsVideo::SetRecommendedQuality(UObject* WorldContextObject) {
}

void USBZSettingsFunctionsVideo::SetPostProcessingQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetMotionBlurEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void USBZSettingsFunctionsVideo::SetMaterialsQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetGamma(UObject* WorldContextObject, float Gamma) {
}

void USBZSettingsFunctionsVideo::SetFramerateMode(UObject* WorldContextObject, ESBZFramerateMode Mode) {
}

void USBZSettingsFunctionsVideo::SetFramerateLimit(UObject* WorldContextObject, int32 Limit) {
}

void USBZSettingsFunctionsVideo::SetFrameInterpolator(UObject* WorldContextObject, ESBZFrameInterpolator FrameInterpolator) {
}

void USBZSettingsFunctionsVideo::SetFoliageQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetEffectsQuality(UObject* WorldContextObject, int32 Value) {
}

void USBZSettingsFunctionsVideo::SetDLSSGEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void USBZSettingsFunctionsVideo::SetDepthOfFieldEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void USBZSettingsFunctionsVideo::SetContrast(UObject* WorldContextObject, float Contrast) {
}

void USBZSettingsFunctionsVideo::SetColorBlindStrength(UObject* WorldContextObject, float Strength) {
}

void USBZSettingsFunctionsVideo::SetColorBlindMode(UObject* WorldContextObject, int32 Mode) {
}

void USBZSettingsFunctionsVideo::SetChromaticAberrationEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void USBZSettingsFunctionsVideo::SetCameraVerticalFieldOfView(UObject* WorldContextObject, float FoV) {
}

void USBZSettingsFunctionsVideo::SetBrightness(UObject* WorldContextObject, float Brightness) {
}

void USBZSettingsFunctionsVideo::SetAntiAliasingMode(UObject* WorldContextObject, ESBZAntiAliasingMode Mode) {
}

bool USBZSettingsFunctionsVideo::IsVSyncEnabledByDefault(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsVSyncEnabled(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsMotionBlurEnabledByDefault(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsMotionBlurEnabled(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsDLSSGEnabledByDefault(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsDLSSGEnabled(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsDepthOfFieldEnabledByDefault(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsDepthOfFieldEnabled(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsChromaticAberrationEnabledByDefault(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::IsChromaticAberrationEnabled(UObject* WorldContextObject) {
    return false;
}

int32 USBZSettingsFunctionsVideo::GetWindowMode(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetViewDistanceQuality(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetUpscalingSharpness(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZUpscalingMode USBZSettingsFunctionsVideo::GetUpscalingMode(UObject* WorldContextObject) {
    return ESBZUpscalingMode::None;
}

ESBZUpscaler USBZSettingsFunctionsVideo::GetUpscaler(UObject* WorldContextObject) {
    return ESBZUpscaler::None;
}

int32 USBZSettingsFunctionsVideo::GetTextureQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetShadowQuality(UObject* WorldContextObject) {
    return 0;
}

FIntPoint USBZSettingsFunctionsVideo::GetResolution(UObject* WorldContextObject) {
    return FIntPoint{};
}

ESBZReflexMode USBZSettingsFunctionsVideo::GetReflexMode(UObject* WorldContextObject) {
    return ESBZReflexMode::Off;
}

int32 USBZSettingsFunctionsVideo::GetPostProcessingQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetMaterialsQuality(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetGamma(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZFramerateMode USBZSettingsFunctionsVideo::GetFramerateMode(UObject* WorldContextObject) {
    return ESBZFramerateMode::Performance;
}

int32 USBZSettingsFunctionsVideo::GetFramerateLimit(UObject* WorldContextObject) {
    return 0;
}

ESBZFrameInterpolator USBZSettingsFunctionsVideo::GetFrameInterpolator(UObject* WorldContextObject) {
    return ESBZFrameInterpolator::None;
}

int32 USBZSettingsFunctionsVideo::GetFoliageQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetEffectsQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetDefaultWindowMode(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetDefaultViewDistanceQuality(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetDefaultUpscalingSharpness(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZUpscalingMode USBZSettingsFunctionsVideo::GetDefaultUpscalingMode(UObject* WorldContextObject) {
    return ESBZUpscalingMode::None;
}

ESBZUpscaler USBZSettingsFunctionsVideo::GetDefaultUpscaler(UObject* WorldContextObject) {
    return ESBZUpscaler::None;
}

int32 USBZSettingsFunctionsVideo::GetDefaultTextureQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetDefaultShadowQuality(UObject* WorldContextObject) {
    return 0;
}

FIntPoint USBZSettingsFunctionsVideo::GetDefaultResolution(UObject* WorldContextObject) {
    return FIntPoint{};
}

ESBZReflexMode USBZSettingsFunctionsVideo::GetDefaultReflexMode(UObject* WorldContextObject) {
    return ESBZReflexMode::Off;
}

int32 USBZSettingsFunctionsVideo::GetDefaultPostProcessingQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetDefaultMaterialsQuality(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetDefaultGamma(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZFramerateMode USBZSettingsFunctionsVideo::GetDefaultFramerateMode(UObject* WorldContextObject) {
    return ESBZFramerateMode::Performance;
}

int32 USBZSettingsFunctionsVideo::GetDefaultFramerateLimit(UObject* WorldContextObject) {
    return 0;
}

ESBZFrameInterpolator USBZSettingsFunctionsVideo::GetDefaultFrameInterpolator(UObject* WorldContextObject) {
    return ESBZFrameInterpolator::None;
}

int32 USBZSettingsFunctionsVideo::GetDefaultFoliageQuality(UObject* WorldContextObject) {
    return 0;
}

int32 USBZSettingsFunctionsVideo::GetDefaultEffectsQuality(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetDefaultContrast(UObject* WorldContextObject) {
    return 0.0f;
}

float USBZSettingsFunctionsVideo::GetDefaultColorBlindStrength(UObject* WorldContextObject) {
    return 0.0f;
}

int32 USBZSettingsFunctionsVideo::GetDefaultColorBlindMode(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetDefaultCameraVerticalFieldOfView(UObject* WorldContextObject) {
    return 0.0f;
}

float USBZSettingsFunctionsVideo::GetDefaultBrightness(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZAntiAliasingMode USBZSettingsFunctionsVideo::GetDefaultAntiAliasingMode(UObject* WorldContextObject) {
    return ESBZAntiAliasingMode::Off;
}

float USBZSettingsFunctionsVideo::GetContrast(UObject* WorldContextObject) {
    return 0.0f;
}

float USBZSettingsFunctionsVideo::GetColorBlindStrength(UObject* WorldContextObject) {
    return 0.0f;
}

int32 USBZSettingsFunctionsVideo::GetColorBlindMode(UObject* WorldContextObject) {
    return 0;
}

float USBZSettingsFunctionsVideo::GetCameraVerticalFieldOfView(UObject* WorldContextObject) {
    return 0.0f;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityVSync(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityUpscalingSharpness(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityUpscalingMode(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityReflexMode(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityFramerateMode(UObject* WorldContextObject) {
    return false;
}

bool USBZSettingsFunctionsVideo::GetButtonVisibilityDLSSG(UObject* WorldContextObject) {
    return false;
}

float USBZSettingsFunctionsVideo::GetBrightness(UObject* WorldContextObject) {
    return 0.0f;
}

ESBZAntiAliasingMode USBZSettingsFunctionsVideo::GetAntiAliasingMode(UObject* WorldContextObject) {
    return ESBZAntiAliasingMode::Off;
}


