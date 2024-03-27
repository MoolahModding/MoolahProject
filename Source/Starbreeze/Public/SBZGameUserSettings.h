#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "InputCoreTypes.h"
#include "Rendering/RenderingCommon.h"
#include "ESBZDifficulty.h"
#include "ESBZOnlineJoinType.h"
#include "ESBZPopupType.h"
#include "ESBZUpscaler.h"
#include "ESBZUpscalingMode.h"
#include "SBZCrosshairSettings.h"
#include "SBZHitIndicatorSettings.h"
#include "SBZInputActionKeyboardBinding.h"
#include "SBZInputAxisKeyboardBinding.h"
#include "SBZPlatformsBackendSettingsInfo.h"
#include "SBZGameUserSettings.generated.h"

class USBZGameInstance;
class USBZGameUserSettings;
class USBZSkillData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SBZVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraVerticalFoV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Contrast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency ColorBlindMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorBlindStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDepthOfField;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUpscalingMode UpscalingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpscalingSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUpscaler Upscaler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapsuleShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutlines;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSubtitles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFPSDisplay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReticle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairsBarWidth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairsBarLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairsDotSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCrosshairsScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCrosshairsScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CrosshairsBarColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CrosshairsDotColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHitIndicators;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitIndicatorScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HitIndicatorColorHit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HitIndicatorColorCrit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HitIndicatorColorKill;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStoryVideoButtons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZOnlineJoinType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MatchmakingDifficulty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VOVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoipVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseContractorAudioBriefing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamepadLookSensitivityCurveEnabled;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GamepadLookDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadLookAccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadLookAccelerationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamepadAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadAimAssistStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadHorizontalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadVerticalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInvertedYAxis;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoldToRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoldToCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoldToTarget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldToSlide;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSwitchWeaponAutomatically;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChatDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrossplayDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoldForTabMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInputAxisKeyboardBinding> AxisKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInputActionKeyboardBinding> ActionKeyboardBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamepadBindingsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlatformsBackendSettingsInfo PlatformsBackendSettingsInfo;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PopupsShownBitmask;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPristine;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdapterName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CPUPerfIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GPUPerfIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalViewDistanceQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalOptimalPostProcessQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalTextureQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalEffectsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalFoliageQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptimalShadingQuality;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USBZSkillData*> InvalidSkillSet;
    
public:
    USBZGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetVOVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoIPVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVideoToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetUserInterfaceToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingMode(ESBZUpscalingMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscaler(ESBZUpscaler Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTelemetryEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingSensitivityMultiplier(float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchWeaponAutomaticallyEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesSize(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryVideoButtonsEnabled(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryKeyboardBinding(FName AxisOrActionName, float Scale, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void SetReticleEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryKeyboardBinding(FName AxisOrActionName, float Scale, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void SetPopupShown(ESBZPopupType PopupType, bool bIsShown);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlinesEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSmoothingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityMultiplier(float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMinCrosshairsScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCrosshairsScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedYAxisEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToTargetEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToRunEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToCrouchEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldForTabMenuEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SethitIndicatorSettings(const FSBZHitIndicatorSettings& HitIndicatorSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorColorKill(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorColorHit(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorColorCrit(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGameSenseEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadVerticalSensitivityMultiplier(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadHorizontalSensitivityMultiplier(float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadBindingsPreset(int32 Preset);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSDisplayEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVideoToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetCrossplayDisabled(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairSettings(const FSBZCrosshairSettings& CrosshairSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairsDotSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairsDotColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairsBarWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairsBarLength(float Length);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshairsBarColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetContrast(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetContractorAudioBriefingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindStrength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(EColorVisionDeficiency Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetChatDisabled(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleShadowQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraVerticalFoV(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingMode(int32 Mode);
    
    UFUNCTION(BlueprintPure)
    bool IsSwitchWeaponAutomaticallyEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStoryVideoButtonsEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsReticleEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPopupShown(ESBZPopupType PopupType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMouseSmoothingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMotionBlurEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInvertedYAxisEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldToTargetEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldToRunEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldToCrouchEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoldForTabMenuEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFPSDisplayEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsForceFeedbackEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDepthOfFieldEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrossplayDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsContractorAudioBriefingEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsChatDisabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetVOVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoIPVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpscalingSharpness() const;
    
    UFUNCTION(BlueprintPure)
    ESBZUpscalingMode GetUpscalingMode() const;
    
    UFUNCTION(BlueprintPure)
    ESBZUpscaler GetUpscaler() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTelemetryEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetingSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubtitlesSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetSFXVolume() const;
    
    UFUNCTION(BlueprintPure)
    FKey GetSecondaryKeyboardBinding(FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintPure)
    FKey GetPrimaryKeyboardBinding(FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinCrosshairsScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxCrosshairsScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZHitIndicatorSettings GetHitIndicatorSettings();
    
    UFUNCTION(BlueprintPure)
    float GetHitIndicatorScale() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetHitIndicatorColorKill() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetHitIndicatorColorHit() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetHitIndicatorColorCrit() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGameSenseEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamepadVerticalSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamepadHorizontalSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGamepadBindingsPreset() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZCrosshairSettings GetCrosshairSettings();
    
    UFUNCTION(BlueprintPure)
    float GetCrosshairsDotSize() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetCrosshairsDotColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrosshairsBarWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrosshairsBarLength() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetCrosshairsBarColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetContrast() const;
    
    UFUNCTION(BlueprintPure)
    float GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintPure)
    EColorVisionDeficiency GetColorBlindMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetCinematicVolume() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCapsuleShadowQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCameraVerticalFoV() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCameraHorizontalFoV(bool bUseLastConfirmedResolution) const;
    
    UFUNCTION(BlueprintPure)
    float GetBrightness() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAntiAliasingMode() const;
    
    UFUNCTION(BlueprintCallable)
    static USBZGameUserSettings* Get();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetQuality();
    
    UFUNCTION(BlueprintPure)
    bool AreSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool AreOutlinesEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool AreHitIndicatorsEnabled() const;
    
};

