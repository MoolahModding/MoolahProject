#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "EPD3DispatchCaller.h"
#include "EPD3DispatchCallerReason.h"
#include "EPD3HeistState.h"
#include "ESBZCharacterStance.h"
#include "ESBZCurrencyCode.h"
#include "ESBZDamageWeight.h"
#include "ESBZDifficulty.h"
#include "ESBZEndMissionResult.h"
#include "ESBZInteractionAction.h"
#include "ESBZMilestoneType.h"
#include "ESBZPlayerAbilityBuffType.h"
#include "SBZCheatManagerBase.h"
#include "SBZEndMissionResultData.h"
#include "SBZCheatManager.generated.h"

class UInputComponent;
class USBZCosmeticsDataAsset;
class USBZCosmeticsPartSlot;
class USBZWeaponPartDataAsset;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCheatManager : public USBZCheatManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* MenuInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* SelectedWeaponPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponPartDataAsset* SelectedWeaponPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsPartSlot* SelectedWeaponCosmeticsPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsDataAsset* SelectedWeaponCosmeticsPart;
    
public:
    USBZCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void ViewTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewSelfByIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Trace(TEnumAsByte<ECollisionChannel> CollisionChannel, FName Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvisiblePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInaudiblePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGod(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugCameraAndTeleport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCrouchedTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ThrowItem(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TasePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SurrenderTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SubduePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartEndlessAssault();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnFBI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAllAITypes(int32 Count, float Distance, float Offset, float Yaw, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Spawn(const FName& AssetName, int32 Count, float Distance, int32 PlayerIndex, float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateChallengeNotificationReceived();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetToolAmmo(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTool(const FName& ToolDataName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetThrowable(const FName& ThrowableDataName, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetEquippableIndexTarget(int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetEquippableIndex(int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetCharacterStance(ESBZCharacterStance Stance, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSkill(const FName& SkillDataName, bool bIsAcquired, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSharedTagCount(const FName& Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRegisterRewardPrints(bool bIsRegistered);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPreMatchInfamyExperience(int32 Experience, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerName(const FString& Name, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerMask(const FName& PlayerMaskName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerCharacter(const FName& CharacterClassName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerArmor(const FName& PlayerArmorName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlaceable(const FName& PlaceableDataName, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOverkillWeaponProgress(float InProgress, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOptionalMilestonePassed(const FString& OptionalMilestoneName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMissionFailedEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMilestonesPassedStealth(int32 MilestonesPassed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMilestonesPassedLoud(int32 MilestonesPassed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMilestonePassed(const FString& MilestoneName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxAICrewCountOverride(int32 MaxAICrewCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMarkedTarget(bool bIsMarked, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLastArrestedByGuard(bool bIsLastArrestedByGuard, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetJesus(bool bIsJesus, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInvisiblePlayer(bool bIsInvisible, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractorModeIndex(int32 ModeIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInfiniteAmmo(bool bHasInifinteAmmo, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInfamyLevelExperience(int32 Level, int32 Experience);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInfamyLevel(int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInfamyExperience(int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInaudiblePlayer(bool bIsInaudible, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeistState(EPD3HeistState HeistState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGod(bool bIsGod, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFriendlyFireSettings(int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEquippedTarget(bool bIsEquipped, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEquippableWeaponPreset(const FString& WeaponPresetGuid, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEquippablePreset(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEquippablePart(const FName& SlotDataName, const FName& PartDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEquippable(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDrawTransformEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDrawTransform(float X, float Y, float Z, float Yaw, float Pitch, float Roll, float ScaleX, float ScaleY, float ScaleZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDifficulty(ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrency(ESBZCurrencyCode Type, int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCrouchedTarget(bool bIsCrouched, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAssaultLevelProgression(float Progression);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAssaultActive(bool bIsActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAmmoLoaded(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAmmoInventory(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllSkills(bool bIsAcquired, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAddMissionFailedTimeout(float AddTimeout);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SecureBag(int32 Count, const FName& AssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SecureAllAvailableLoot(const bool bClearClaim);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReviveTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RevivePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetCVars();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestMissionSuccess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestMissionFail();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestMissionEnd(ESBZEndMissionResult Result, int32 OutroVariation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportBug(const FString& Description, bool bIsEverywhere, bool bIsBlockerChecked, bool bIsInteractableChecked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCurrency(ESBZCurrencyCode Type, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RebuildAssetLookup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintWorldInfo(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTargetTagChanges(bool bIsPrintEnabled, const FName& Tag, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTagChanges(bool bIsPrintEnabled, const FName& Tag, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintServerWorldInfo(int32 PlayerIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void PrintRewardLogEvent(const FSBZEndMissionResultData& EndMissionResultData);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PrintPlayerIDArray();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintMissionSeed();
    
private:
    UFUNCTION(BlueprintCallable)
    void PrintExperienceMilestone(const ESBZMilestoneType MilestoneType, const FString& MilestoneName);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAnimNotifies(const FName& NotifyName, bool bIsOnlyMontages);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllInteractable(bool bIsTemplate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PossessTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PossessSelf(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerceptionOnAllAI(bool bShouldHavePerception);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OverlapSphere(TEnumAsByte<ECollisionChannel> CollisionChannel, const FName& Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogSceneComponents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LobotomizeCrewAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LobotomizeAllAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListenToRewardLogs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InteractAITarget(ESBZInteractionAction Action, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputVectorAxisTarget(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputVectorAxisPlayer(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputKeyTarget(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputKeyPlayer(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputAxisTarget(const FName& AxisName, float InputValue, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputAxisPlayer(const FName& AxisName, float InputValue, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputActionTarget(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, bool bIsReleaseCancelingAbility, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InputActionPlayer(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrantUserEntitlement(const FString& AccelByteItemIdString, const FString& AccelByteItemSku, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GrabInstantLoot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveToolAmmo(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAmmo(int32 Amount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GamepadOpenInGameCheatMenu(FKey Key);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GainPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, bool bIsRefreshAllowed, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindClassReferences(const FName& ClassName, bool bIsSubClassesIncluded, bool bIsBlueprintsIncluded, bool bIsAssetsLoaded);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindBlocker(bool bIsComplex, float TraceDistance, float TraceRadius, float OverlapDistance, float OverlapRadius, int32 MaxHitCountTrace, int32 MaxHitCountOverlap, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipOverkillWeapon(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllPlayerStatistics(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllPlayersInfamyAndPlatform();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllPlayersAccelByteDisplayName();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyTargetAI(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllDebris();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllAI(bool bOnlyRagdolls);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DefeatTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DefeatPlayer(bool bIsDirectIntoCustody, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVehicleSplineData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowSubtitle(const FString& LocID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateProjectileImpact();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateFootstepImpact();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateExplosionImpact();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateBloodSplatterImpact();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamagePlayer(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageCharacter(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CuffPlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConsumePlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeStatCode(const FString& StatCode, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeAssaultDrama(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CallDispatcher(EPD3DispatchCaller Caller, EPD3DispatchCallerReason Reason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyGameplayEffectTarget(const FName& AssetName, float Duration, const FString& NameMagnitudeString, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCurrency(ESBZCurrencyCode Type, int32 Amount);
    
};

