#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "InputCoreTypes.h"
#include "Rendering/RenderingCommon.h"
#include "ESBZAntiAliasingMode.h"
#include "ESBZDifficulty.h"
#include "ESBZFrameInterpolator.h"
#include "ESBZFramerateMode.h"
#include "ESBZOnlineDropInType.h"
#include "ESBZOnlineJoinType.h"
#include "ESBZOnlineTacticType.h"
#include "ESBZPopupType.h"
#include "ESBZReflexMode.h"
#include "ESBZUpscaler.h"
#include "ESBZUpscalingMode.h"
#include "SBZCrosshairSettings.h"
#include "SBZHitIndicatorSettings.h"
#include "SBZInputActionKeyboardBinding.h"
#include "SBZInputAxisKeyboardBinding.h"
#include "SBZPlatformsBackendSettingsInfo.h"
#include "SBZGameUserSettings.generated.h"

class UObject;
class USBZGameInstance;
class USBZGameUserSettings;
class USBZSkillData;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SBZVersion;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraVerticalFoV;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFramerateMode FramerateMode;
    
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
    bool bUseChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAntiAliasingMode AntiAliasingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUpscalingMode UpscalingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpscalingSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUpscaler Upscaler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFrameInterpolator FrameInterpolator;
    
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
    ESBZOnlineTacticType TacticType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZOnlineDropInType DropInType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MatchmakingDifficulty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> PlayerCardPlatformIncludedSet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VOVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoIPEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushToTalkEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoipVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoipMicVolume;
    
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
    bool bIsRememberSkipIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbobScale;
    
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
    void SetVoIPMicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoIPEnabled(bool bIsEnabled);
    
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
    void SetTacticType(ESBZOnlineTacticType InTacticType, bool bIsSaved);
    
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
    void SetPushToTalkEnabled(bool bIsEnabled);
    
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
    void SetMatchmakingDifficulty(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyType(ESBZOnlineJoinType InLobbyType);
    
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
    void SetFrameInterpolator(ESBZFrameInterpolator Type);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSDisplayEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDropInType(ESBZOnlineDropInType InDropInType, bool bIsSaved);
    
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
    void SetChromaticAberrationEnabled(bool bEnable);
    
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
    void SetAntiAliasingMode(ESBZAntiAliasingMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoIPEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchWeaponAutomaticallyEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryVideoButtonsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReticleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushToTalkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPopupShown(ESBZPopupType PopupType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseSmoothingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionBlurEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvertedYAxisEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldToTargetEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldToRunEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldToCrouchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldForTabMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFPSDisplayEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceFeedbackEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDepthOfFieldEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossplayDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContractorAudioBriefingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChromaticAberrationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChatDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVOVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoIPVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoIPMicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpscalingSharpness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZUpscalingMode GetUpscalingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZUpscaler GetUpscaler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTelemetryEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineTacticType GetTacticType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitlesSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSFXVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSecondaryKeyboardBinding(FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameUserSettings* GetSBZGameUserSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPrimaryKeyboardBinding(FName AxisOrActionName, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinCrosshairsScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCrosshairsScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetMatchmakingDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineJoinType GetLobbyType() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZHitIndicatorSettings GetHitIndicatorSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitIndicatorScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetHitIndicatorColorKill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetHitIndicatorColorHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetHitIndicatorColorCrit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameSenseEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadVerticalSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadHorizontalSensitivityMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamepadBindingsPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZFrameInterpolator GetFrameInterpolator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineDropInType GetDropInType() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZCrosshairSettings GetCrosshairSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrosshairsDotSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCrosshairsDotColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrosshairsBarWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrosshairsBarLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCrosshairsBarColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContrast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EColorVisionDeficiency GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCinematicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapsuleShadowQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCameraVerticalFoV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCameraHorizontalFoV(bool bUseLastConfirmedResolution) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZAntiAliasingMode GetAntiAliasingMode() const;
    
    UFUNCTION(BlueprintCallable)
    static USBZGameUserSettings* Get();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOutlinesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreHitIndicatorsEnabled() const;
    
};

