#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsFunctions.h"
#include "SBZSettingsFunctionsGameplay.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZSettingsFunctionsGameplay : public USBZSettingsFunctions {
    GENERATED_BODY()
public:
    USBZSettingsFunctionsGameplay();
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetTelemetryDisabled(UObject* WorldContextObject, bool bDisabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetTargetingSensitivityMultiplier(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetSwitchWeaponAutomaticallyEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMouseSmoothingEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMouseSensitivityMultiplier(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetInvertedYAxisEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetHoldToTargetEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetHoldToSlideEnabled(UObject* WorldContextObject, bool bInIsEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetHoldToRunEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetHoldToCrouchEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamesightDisabled(UObject* WorldContextObject, bool bDisabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadVerticalSensitivityMultiplier(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadLookSensitivityLinearEnabled(UObject* WorldContextObject, bool bIsLinearEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadLookDeadZoneMin(UObject* WorldContextObject, float InMin);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadLookDeadZoneMax(UObject* WorldContextObject, float InMax);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadLookAccelerationTime(UObject* WorldContextObject, float InTime);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadLookAccelerationMultiplier(UObject* WorldContextObject, float InMultiplier);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadHorizontalSensitivityMultiplier(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadAimAssistStrength(UObject* WorldContextObject, float InStrength);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetGamepadAimAssistEnabled(UObject* WorldContextObject, bool bInIsEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetCrossplayDisabled(UObject* WorldContextObject, bool bDisabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetControllerVibrationsEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetChatDisabled(UObject* WorldContextObject, bool bDisabled);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsTelemetryDisabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsTelemetryDisabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsSwitchWeaponAutomaticallyEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsSwitchWeaponAutomaticallyEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsMouseSmoothingEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsMouseSmoothingEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsInvertedYAxisEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsInvertedYAxisEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToTargetEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToTargetEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToSlideEnabledDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToSlideEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToRunEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToRunEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToCrouchEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsHoldToCrouchEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamesightDisabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamesightDisabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamepadLookSensitivityLinearEnabledDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamepadLookSensitivityLinearEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamepadAimAssistEnabledDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsGamepadAimAssistEnabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsCrossplayDisabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsCrossplayDisabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsChatDisabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool IsChatDisabled(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetTargetingSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetMouseSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadVerticalSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookDeadZoneMinDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookDeadZoneMin(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookDeadZoneMaxDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookDeadZoneMax(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookAccelerationTimeDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookAccelerationTime(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookAccelerationMultiplierDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadLookAccelerationMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadHorizontalSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadAimAssistStrengthDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetGamepadAimAssistStrength(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultTargetingSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultMouseSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultGamepadVerticalSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultGamepadHorizontalSensitivityMultiplier(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool AreControllerVibrationsEnabledByDefault(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool AreControllerVibrationsEnabled(UObject* WorldContextObject);
    
};

