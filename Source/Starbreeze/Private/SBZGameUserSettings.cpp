#include "SBZGameUserSettings.h"

USBZGameUserSettings::USBZGameUserSettings() {
    this->SBZVersion = 5;
    this->ReflexMode = ESBZReflexMode::On;
    this->CameraVerticalFoV = 90;
    this->FramerateMode = ESBZFramerateMode::Performance;
    this->Brightness = 1.00f;
    this->Contrast = 1.00f;
    this->Gamma = 1.00f;
    this->ColorBlindMode = EColorVisionDeficiency::NormalVision;
    this->ColorBlindStrength = 0.50f;
    this->bUseMotionBlur = true;
    this->bUseDepthOfField = false;
    this->bUseChromaticAberration = true;
    this->AntiAliasingMode = ESBZAntiAliasingMode::Performance;
    this->UpscalingMode = ESBZUpscalingMode::Quality;
    this->UpscalingSharpness = 0.05f;
    this->Upscaler = ESBZUpscaler::DLSSSR;
    this->FrameInterpolator = ESBZFrameInterpolator::None;
    this->CapsuleShadowQuality = 3;
    this->bUseOutlines = true;
    this->bUseSubtitles = true;
    this->SubtitlesSize = 16;
    this->bUseFPSDisplay = false;
    this->bUseReticle = true;
    this->CrosshairsBarWidth = 2.00f;
    this->CrosshairsBarLength = 8.00f;
    this->CrosshairsDotSize = 2.00f;
    this->MinCrosshairsScale = 2.00f;
    this->MaxCrosshairsScale = 48.00f;
    this->bUseHitIndicators = true;
    this->HitIndicatorScale = 32.00f;
    this->bEnableStoryVideoButtons = false;
    this->LobbyType = ESBZOnlineJoinType::Private;
    this->TacticType = ESBZOnlineTacticType::Default;
    this->DropInType = ESBZOnlineDropInType::Default;
    this->MatchmakingDifficulty = ESBZDifficulty::Default;
    this->MasterVolume = 100.00f;
    this->MusicVolume = 0.00f;
    this->VOVolume = 75.00f;
    this->SFXVolume = 100.00f;
    this->bVoIPEnabled = true;
    this->bPushToTalkEnabled = false;
    this->VoipVolume = 100.00f;
    this->VoipMicVolume = 100.00f;
    this->CinematicVolume = 100.00f;
    this->bUseContractorAudioBriefing = false;
    this->MouseSensitivityMultiplier = 1.00f;
    this->bUseMouseSmoothing = true;
    this->bIsGamepadLookSensitivityCurveEnabled = true;
    this->GamepadLookAccelerationMultiplier = 3.00f;
    this->GamepadLookAccelerationTime = 0.25f;
    this->bIsGamepadAimAssistEnabled = true;
    this->GamepadAimAssistStrength = 1.00f;
    this->GamepadHorizontalSensitivity = 1.00f;
    this->GamepadVerticalSensitivity = 1.00f;
    this->bUseInvertedYAxis = false;
    this->bUseForceFeedback = true;
    this->TargetingSensitivityMultiplier = 1.00f;
    this->bUseHoldToRun = true;
    this->bUseHoldToCrouch = false;
    this->bUseHoldToTarget = true;
    this->bIsHoldToSlide = false;
    this->bUseSwitchWeaponAutomatically = true;
    this->bIsChatDisabled = false;
    this->bIsCrossplayDisabled = false;
    this->MouseSensitivity = 0.07f;
    this->bUseHoldForTabMenu = false;
    this->bIsRememberSkipIntroSequence = true;
    this->HeadbobScale = 1.00f;
    this->AxisKeyboardBindings.AddDefaulted(8);
    this->ActionKeyboardBindings.AddDefaulted(34);
    this->GamepadBindingsPreset = 0;
    this->PopupsShownBitmask = 2;
    this->AdapterName = TEXT("NVIDIA GeForce RTX 3060");
    this->CPUPerfIndex = 228.93f;
    this->GPUPerfIndex = 276.45f;
    this->OptimalViewDistanceQuality = 2;
    this->OptimalShadowQuality = 2;
    this->OptimalOptimalPostProcessQuality = 2;
    this->OptimalTextureQuality = 2;
    this->OptimalEffectsQuality = 2;
    this->OptimalFoliageQuality = 2;
    this->OptimalShadingQuality = 2;
    this->GameInstance = NULL;
}

void USBZGameUserSettings::SetVOVolume(float Volume) {
}

void USBZGameUserSettings::SetVoIPVolume(float Volume) {
}

void USBZGameUserSettings::SetVoIPMicVolume(float Volume) {
}

void USBZGameUserSettings::SetVoIPEnabled(bool bIsEnabled) {
}

void USBZGameUserSettings::SetVideoToDefaults() {
}

void USBZGameUserSettings::SetUserInterfaceToDefaults() {
}

void USBZGameUserSettings::SetUpscalingSharpness(float Sharpness) {
}

void USBZGameUserSettings::SetUpscalingMode(ESBZUpscalingMode Mode) {
}

void USBZGameUserSettings::SetUpscaler(ESBZUpscaler Type) {
}

void USBZGameUserSettings::SetTelemetryEnabled(bool bIsEnabled) {
}

void USBZGameUserSettings::SetTargetingSensitivityMultiplier(float Sensitivity) {
}

void USBZGameUserSettings::SetTacticType(ESBZOnlineTacticType InTacticType, bool bIsSaved) {
}

void USBZGameUserSettings::SetSwitchWeaponAutomaticallyEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetSubtitlesSize(int32 Value) {
}

void USBZGameUserSettings::SetSubtitlesEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetStoryVideoButtonsEnabled(bool bInEnable) {
}

void USBZGameUserSettings::SetSFXVolume(float Volume) {
}

void USBZGameUserSettings::SetSecondaryKeyboardBinding(FName AxisOrActionName, float Scale, FKey Key) {
}

void USBZGameUserSettings::SetReticleEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetPushToTalkEnabled(bool bIsEnabled) {
}

void USBZGameUserSettings::SetPrimaryKeyboardBinding(FName AxisOrActionName, float Scale, FKey Key) {
}

void USBZGameUserSettings::SetPopupShown(ESBZPopupType PopupType, bool bIsShown) {
}

void USBZGameUserSettings::SetOutlinesEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetMusicVolume(float Volume) {
}

void USBZGameUserSettings::SetMouseSmoothingEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetMouseSensitivityMultiplier(float Sensitivity) {
}

void USBZGameUserSettings::SetMouseSensitivity(float Sensitivity) {
}

void USBZGameUserSettings::SetMotionBlurEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetMinCrosshairsScale(float Scale) {
}

void USBZGameUserSettings::SetMaxCrosshairsScale(float Scale) {
}

void USBZGameUserSettings::SetMatchmakingDifficulty(ESBZDifficulty InDifficulty) {
}

void USBZGameUserSettings::SetMasterVolume(float Volume) {
}

void USBZGameUserSettings::SetLobbyType(ESBZOnlineJoinType InLobbyType) {
}

void USBZGameUserSettings::SetKeyboardToDefaults() {
}

void USBZGameUserSettings::SetInvertedYAxisEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetHoldToTargetEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetHoldToRunEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetHoldToCrouchEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetHoldForTabMenuEnabled(bool bEnable) {
}

void USBZGameUserSettings::SethitIndicatorSettings(const FSBZHitIndicatorSettings& HitIndicatorSettings) {
}

void USBZGameUserSettings::SetHitIndicatorsEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetHitIndicatorScale(float Scale) {
}

void USBZGameUserSettings::SetHitIndicatorColorKill(FLinearColor Color) {
}

void USBZGameUserSettings::SetHitIndicatorColorHit(FLinearColor Color) {
}

void USBZGameUserSettings::SetHitIndicatorColorCrit(FLinearColor Color) {
}

void USBZGameUserSettings::SetGamma(float Value) {
}

void USBZGameUserSettings::SetGameSenseEnabled(bool bIsEnabled) {
}

void USBZGameUserSettings::SetGameplayToDefaults() {
}

void USBZGameUserSettings::SetGamepadVerticalSensitivityMultiplier(float InSensitivity) {
}

void USBZGameUserSettings::SetGamepadToDefaults() {
}

void USBZGameUserSettings::SetGamepadHorizontalSensitivityMultiplier(float Sensitivity) {
}

void USBZGameUserSettings::SetGamepadBindingsPreset(int32 Preset) {
}

void USBZGameUserSettings::SetFrameInterpolator(ESBZFrameInterpolator Type) {
}

void USBZGameUserSettings::SetFPSDisplayEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetForceFeedbackEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetDropInType(ESBZOnlineDropInType InDropInType, bool bIsSaved) {
}

void USBZGameUserSettings::SetDepthOfFieldEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetCustomVideoToDefaults() {
}

void USBZGameUserSettings::SetCrossplayDisabled(bool bDisable) {
}

void USBZGameUserSettings::SetCrosshairSettings(const FSBZCrosshairSettings& CrosshairSettings) {
}

void USBZGameUserSettings::SetCrosshairsDotSize(float Size) {
}

void USBZGameUserSettings::SetCrosshairsDotColor(FLinearColor Color) {
}

void USBZGameUserSettings::SetCrosshairsBarWidth(float Width) {
}

void USBZGameUserSettings::SetCrosshairsBarLength(float Length) {
}

void USBZGameUserSettings::SetCrosshairsBarColor(FLinearColor Color) {
}

void USBZGameUserSettings::SetContrast(float Value) {
}

void USBZGameUserSettings::SetContractorAudioBriefingEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetColorBlindStrength(float Value) {
}

void USBZGameUserSettings::SetColorBlindMode(EColorVisionDeficiency Value) {
}

void USBZGameUserSettings::SetCinematicVolume(float Volume) {
}

void USBZGameUserSettings::SetChromaticAberrationEnabled(bool bEnable) {
}

void USBZGameUserSettings::SetChatDisabled(bool bDisable) {
}

void USBZGameUserSettings::SetCapsuleShadowQuality(int32 Quality) {
}

void USBZGameUserSettings::SetCameraVerticalFoV(int32 Value) {
}

void USBZGameUserSettings::SetBrightness(float Value) {
}

void USBZGameUserSettings::SetAudioToDefaults() {
}

void USBZGameUserSettings::SetAntiAliasingMode(ESBZAntiAliasingMode Mode) {
}

bool USBZGameUserSettings::IsVoIPEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsSwitchWeaponAutomaticallyEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsStoryVideoButtonsEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsReticleEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsPushToTalkEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsPopupShown(ESBZPopupType PopupType) const {
    return false;
}

bool USBZGameUserSettings::IsMouseSmoothingEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsMotionBlurEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsInvertedYAxisEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsHoldToTargetEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsHoldToRunEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsHoldToCrouchEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsHoldForTabMenuEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsFPSDisplayEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsForceFeedbackEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsDepthOfFieldEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsCrossplayDisabled() const {
    return false;
}

bool USBZGameUserSettings::IsContractorAudioBriefingEnabled() {
    return false;
}

bool USBZGameUserSettings::IsChromaticAberrationEnabled() const {
    return false;
}

bool USBZGameUserSettings::IsChatDisabled() const {
    return false;
}

float USBZGameUserSettings::GetVOVolume() const {
    return 0.0f;
}

float USBZGameUserSettings::GetVoIPVolume() const {
    return 0.0f;
}

float USBZGameUserSettings::GetVoIPMicVolume() const {
    return 0.0f;
}

float USBZGameUserSettings::GetUpscalingSharpness() const {
    return 0.0f;
}

ESBZUpscalingMode USBZGameUserSettings::GetUpscalingMode() const {
    return ESBZUpscalingMode::None;
}

ESBZUpscaler USBZGameUserSettings::GetUpscaler() const {
    return ESBZUpscaler::None;
}

bool USBZGameUserSettings::GetTelemetryEnabled() const {
    return false;
}

float USBZGameUserSettings::GetTargetingSensitivityMultiplier() const {
    return 0.0f;
}

ESBZOnlineTacticType USBZGameUserSettings::GetTacticType() const {
    return ESBZOnlineTacticType::Default;
}

int32 USBZGameUserSettings::GetSubtitlesSize() const {
    return 0;
}

float USBZGameUserSettings::GetSFXVolume() const {
    return 0.0f;
}

FKey USBZGameUserSettings::GetSecondaryKeyboardBinding(FName AxisOrActionName, float Scale) {
    return FKey{};
}

USBZGameUserSettings* USBZGameUserSettings::GetSBZGameUserSettings(const UObject* WorldContextObject) {
    return NULL;
}

FKey USBZGameUserSettings::GetPrimaryKeyboardBinding(FName AxisOrActionName, float Scale) {
    return FKey{};
}

float USBZGameUserSettings::GetMusicVolume() const {
    return 0.0f;
}

float USBZGameUserSettings::GetMouseSensitivityMultiplier() const {
    return 0.0f;
}

float USBZGameUserSettings::GetMouseSensitivity() const {
    return 0.0f;
}

float USBZGameUserSettings::GetMinCrosshairsScale() const {
    return 0.0f;
}

float USBZGameUserSettings::GetMaxCrosshairsScale() const {
    return 0.0f;
}

ESBZDifficulty USBZGameUserSettings::GetMatchmakingDifficulty() const {
    return ESBZDifficulty::Default;
}

float USBZGameUserSettings::GetMasterVolume() const {
    return 0.0f;
}

ESBZOnlineJoinType USBZGameUserSettings::GetLobbyType() const {
    return ESBZOnlineJoinType::Debug_DEPRECATED;
}

FSBZHitIndicatorSettings USBZGameUserSettings::GetHitIndicatorSettings() {
    return FSBZHitIndicatorSettings{};
}

float USBZGameUserSettings::GetHitIndicatorScale() const {
    return 0.0f;
}

FLinearColor USBZGameUserSettings::GetHitIndicatorColorKill() const {
    return FLinearColor{};
}

FLinearColor USBZGameUserSettings::GetHitIndicatorColorHit() const {
    return FLinearColor{};
}

FLinearColor USBZGameUserSettings::GetHitIndicatorColorCrit() const {
    return FLinearColor{};
}

float USBZGameUserSettings::GetGamma() const {
    return 0.0f;
}

bool USBZGameUserSettings::GetGameSenseEnabled() const {
    return false;
}

float USBZGameUserSettings::GetGamepadVerticalSensitivityMultiplier() const {
    return 0.0f;
}

float USBZGameUserSettings::GetGamepadHorizontalSensitivityMultiplier() const {
    return 0.0f;
}

int32 USBZGameUserSettings::GetGamepadBindingsPreset() const {
    return 0;
}

ESBZFrameInterpolator USBZGameUserSettings::GetFrameInterpolator() const {
    return ESBZFrameInterpolator::None;
}

ESBZOnlineDropInType USBZGameUserSettings::GetDropInType() const {
    return ESBZOnlineDropInType::Default;
}

FSBZCrosshairSettings USBZGameUserSettings::GetCrosshairSettings() {
    return FSBZCrosshairSettings{};
}

float USBZGameUserSettings::GetCrosshairsDotSize() const {
    return 0.0f;
}

FLinearColor USBZGameUserSettings::GetCrosshairsDotColor() const {
    return FLinearColor{};
}

float USBZGameUserSettings::GetCrosshairsBarWidth() const {
    return 0.0f;
}

float USBZGameUserSettings::GetCrosshairsBarLength() const {
    return 0.0f;
}

FLinearColor USBZGameUserSettings::GetCrosshairsBarColor() const {
    return FLinearColor{};
}

float USBZGameUserSettings::GetContrast() const {
    return 0.0f;
}

float USBZGameUserSettings::GetColorBlindStrength() const {
    return 0.0f;
}

EColorVisionDeficiency USBZGameUserSettings::GetColorBlindMode() const {
    return EColorVisionDeficiency::NormalVision;
}

float USBZGameUserSettings::GetCinematicVolume() const {
    return 0.0f;
}

int32 USBZGameUserSettings::GetCapsuleShadowQuality() const {
    return 0;
}

int32 USBZGameUserSettings::GetCameraVerticalFoV() const {
    return 0;
}

int32 USBZGameUserSettings::GetCameraHorizontalFoV(bool bUseLastConfirmedResolution) const {
    return 0;
}

float USBZGameUserSettings::GetBrightness() const {
    return 0.0f;
}

ESBZAntiAliasingMode USBZGameUserSettings::GetAntiAliasingMode() const {
    return ESBZAntiAliasingMode::Off;
}

USBZGameUserSettings* USBZGameUserSettings::Get() {
    return NULL;
}

void USBZGameUserSettings::AutoSetQuality() {
}

bool USBZGameUserSettings::AreSubtitlesEnabled() const {
    return false;
}

bool USBZGameUserSettings::AreOutlinesEnabled() const {
    return false;
}

bool USBZGameUserSettings::AreHitIndicatorsEnabled() const {
    return false;
}


