#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "EPD3DispatchCaller.h"
#include "EPD3DispatchCallerReason.h"
#include "EPD3HeistState.h"
#include "ESBZAIOrderMode.h"
#include "ESBZCharacterStance.h"
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
    UFUNCTION(Exec)
    void ViewTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ViewSelfByIndex(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void Trace(TEnumAsByte<ECollisionChannel> CollisionChannel, FName Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(Exec)
    void ToggleInvisiblePlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ToggleInaudiblePlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ToggleGod(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ToggleDebugCameraAndTeleport();
    
    UFUNCTION(Exec)
    void ToggleCrouchedTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ThrowItem(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void TasePlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SurrenderTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SubduePlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void StartEndlessAssault(bool bForceStartAssault);
    
    UFUNCTION(Exec)
    void SpawnFBI();
    
    UFUNCTION(Exec)
    void SpawnAllAITypes(int32 Count, float Distance, float Offset, float Yaw, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void Spawn(const FName& AssetName, int32 Count, float Distance, int32 PlayerIndex, float Yaw);
    
    UFUNCTION(Exec)
    void SimulateChallengeNotificationReceived();
    
    UFUNCTION(Exec)
    void SetToolAmmo(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetTool(const FName& ToolDataName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetThrowable(const FName& ThrowableDataName, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetTargetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetTargetEquippableIndexTarget(int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetTargetEquippableIndex(int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetTargetCharacterStance(ESBZCharacterStance Stance, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetSkill(const FName& SkillDataName, bool bIsAcquired, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetSharedTagCount(const FName& Tag, int32 Count);
    
    UFUNCTION(Exec)
    void SetRegisterRewardPrints(bool bIsRegistered);
    
    UFUNCTION(Exec)
    void SetPlayerName(const FString& Name, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPlayerMask(const FName& PlayerMaskName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPlayerCharacter(const FName& CharacterClassName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPlayerArmor(const FName& PlayerArmorName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPlaceable(const FName& PlaceableDataName, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetOverkillWeaponProgress(float InProgress, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetOptionalMilestonePassed(const FString& OptionalMilestoneName);
    
    UFUNCTION(Exec)
    void SetMissionFailedEnabled(bool bIsEnabled);
    
    UFUNCTION(Exec)
    void SetMilestonesPassedStealth(int32 MilestonesPassed);
    
    UFUNCTION(Exec)
    void SetMilestonesPassedLoud(int32 MilestonesPassed);
    
    UFUNCTION(Exec)
    void SetMilestonePassed(const FString& MilestoneName);
    
    UFUNCTION(Exec)
    void SetMaxAICrewCountOverride(int32 MaxAICrewCount);
    
    UFUNCTION(Exec)
    void SetMarkedTarget(bool bIsMarked, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetLastArrestedByGuard(bool bIsLastArrestedByGuard, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetJesus(bool bIsJesus, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetInvisiblePlayer(bool bIsInvisible, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetInteractorModeIndex(int32 ModeIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetInfiniteAmmo(bool bHasInifinteAmmo, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetInaudiblePlayer(bool bIsInaudible, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetHeistState(EPD3HeistState HeistState);
    
    UFUNCTION(Exec)
    void SetGod(bool bIsGod, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetFriendlyFireSettings(int32 Value);
    
    UFUNCTION(Exec)
    void SetEquippedTarget(bool bIsEquipped, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetEquippableWeaponPreset(const FString& WeaponPresetGuid, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetEquippablePreset(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetEquippablePart(const FName& SlotDataName, const FName& PartDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetEquippable(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetDrawTransformEnabled(bool bIsEnabled);
    
    UFUNCTION(Exec)
    void SetDrawTransform(float X, float Y, float Z, float Yaw, float Pitch, float Roll, float ScaleX, float ScaleY, float ScaleZ);
    
    UFUNCTION(Exec)
    void SetDownedCount(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetDifficulty(ESBZDifficulty Difficulty);
    
    UFUNCTION(Exec)
    void SetCrouchedTarget(bool bIsCrouched, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetAssaultLevelProgression(float Progression);
    
    UFUNCTION(Exec)
    void SetAssaultActive(bool bIsActive);
    
    UFUNCTION(Exec)
    void SetAmmoLoaded(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetAmmoInventory(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetAllSkills(bool bIsAcquired, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetAddMissionFailedTimeout(float AddTimeout);
    
    UFUNCTION(Exec)
    void SendSessionMessage(const FString& Message);
    
    UFUNCTION(Exec)
    void SelectDebugActorTarget(bool bIsSelectedInEditor, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SecureBag(int32 Count, const FName& AssetName);
    
    UFUNCTION(Exec)
    void SecureAllAvailableLoot(const bool bClearClaim);
    
    UFUNCTION(Exec)
    void ReviveTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void RevivePlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ReviveCrewAI(int32 CrewAIIndex);
    
    UFUNCTION(Exec)
    void ResetCVars();
    
    UFUNCTION(Exec)
    void RequestMissionSuccess();
    
    UFUNCTION(Exec)
    void RequestMissionFail();
    
    UFUNCTION(Exec)
    void RequestMissionEnd(ESBZEndMissionResult Result, int32 OutroVariation);
    
    UFUNCTION(Exec)
    void ReportBug(const FString& Description, bool bIsEverywhere, bool bIsBlockerChecked, bool bIsInteractableChecked);
    
    UFUNCTION(Exec)
    void RefreshPlayerAbilityBuffAll(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void RefreshPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void RebuildAssetLookup();
    
    UFUNCTION(Exec)
    void PrintWorldInfo(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintTargetTagChanges(bool bIsPrintEnabled, const FName& Tag, bool bIsStackTrace, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintTagChanges(bool bIsPrintEnabled, const FName& Tag, bool bIsStackTrace, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintServerWorldInfo(int32 PlayerIndex);
    
private:
    UFUNCTION()
    void PrintRewardLogEvent(const FSBZEndMissionResultData& EndMissionResultData);
    
public:
    UFUNCTION(Exec)
    void PrintPlayerIDArray();
    
    UFUNCTION(Exec)
    void PrintMissionSeed();
    
private:
    UFUNCTION()
    void PrintExperienceMilestone(const ESBZMilestoneType MilestoneType, const FString& MilestoneName);
    
public:
    UFUNCTION(Exec)
    void PrintAnimNotifies(const FName& NotifyName, bool bIsOnlyMontages);
    
    UFUNCTION(Exec)
    void PrintAllInteractable(bool bIsTemplate);
    
    UFUNCTION(Exec)
    void PossessTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PossessSelf(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PerceptionOnAllAI(bool bShouldHavePerception);
    
    UFUNCTION(Exec)
    void OverlapSphere(TEnumAsByte<ECollisionChannel> CollisionChannel, const FName& Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(Exec)
    void MoveDebugActorTarget(ESBZAIOrderMode OrderMode, const FName& MoveOrderAssetName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void LogSceneComponents();
    
    UFUNCTION(Exec)
    void LobotomizeAllCrewAI();
    
    UFUNCTION(Exec)
    void LobotomizeAllAI();
    
    UFUNCTION(Exec)
    void ListenToRewardLogs();
    
    UFUNCTION(Exec)
    void KillTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void KillPlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void KillAllCrewAI();
    
    UFUNCTION(Exec)
    void KillAllAI();
    
    UFUNCTION(Exec)
    void InteractAITarget(ESBZInteractionAction Action, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputVectorAxisTarget(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputVectorAxisPlayer(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputKeyTarget(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputKeyPlayer(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputAxisTarget(const FName& AxisName, float InputValue, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputAxisPlayer(const FName& AxisName, float InputValue, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputActionTarget(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, bool bIsReleaseCancelingAbility, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void InputActionPlayer(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GrabInstantLoot();
    
    UFUNCTION(Exec)
    void GiveToolAmmo(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GiveThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GivePlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GiveAmmo(int32 Amount, int32 WeaponIndex, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GamepadOpenInGameCheatMenu(FKey Key);
    
    UFUNCTION(Exec)
    void GainPlayerAbilityBuffAll(bool bIsRefreshAllowed, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void GainPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, bool bIsRefreshAllowed, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void FulfillUserItem(const FString& AccelByteItemIdString, const FString& AccelByteItemSku, FString& ItemNamespace, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void FindClassReferences(const FName& ClassName, bool bIsSubClassesIncluded, bool bIsBlueprintsIncluded, bool bIsAssetsLoaded);
    
    UFUNCTION(Exec)
    void FindBlocker(bool bIsComplex, float TraceDistance, float TraceRadius, float OverlapDistance, float OverlapRadius, int32 MaxHitCountTrace, int32 MaxHitCountOverlap, float DrawDuration, bool bIsDrawPersistent);
    
    UFUNCTION(Exec)
    void EquipOverkillWeapon(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DestroyTargetAI(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DestroyAllDebris();
    
    UFUNCTION(Exec)
    void DestroyAllAI(bool bOnlyRagdolls);
    
    UFUNCTION(Exec)
    void DefeatTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DefeatPlayer(bool bIsDirectIntoCustody, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DefeatCrewAI(int32 CrewAIIndex);
    
    UFUNCTION(Exec)
    void DebugVehicleSplineData();
    
    UFUNCTION(Exec)
    void DebugShowSubtitle(const FString& LocID);
    
    UFUNCTION(Exec)
    void DebugCreateProjectileImpact();
    
    UFUNCTION(Exec)
    void DebugCreateFootstepImpact();
    
    UFUNCTION(Exec)
    void DebugCreateExplosionImpact();
    
    UFUNCTION(Exec)
    void DebugCreateBloodSplatterImpact();
    
    UFUNCTION(Exec)
    void DamagePlayer(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DamageCharacter(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DamageAllCrewAI(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void CuffPlayer(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ConsumePlayerAbilityBuffAll(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ConsumePlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ChangeAssaultDrama(float Amount);
    
    UFUNCTION(Exec)
    void CallDispatcher(EPD3DispatchCaller Caller, EPD3DispatchCallerReason Reason);
    
    UFUNCTION(Exec)
    void ApplyGameplayEffectTarget(const FName& AssetName, float Duration, const FString& NameMagnitudeString, int32 PlayerIndex);
    
};

