#include "SBZCheatManager.h"

USBZCheatManager::USBZCheatManager() {
    this->MenuInputComponent = NULL;
    this->SelectedWeaponPartSlot = NULL;
    this->SelectedWeaponPart = NULL;
    this->SelectedWeaponCosmeticsPartSlot = NULL;
    this->SelectedWeaponCosmeticsPart = NULL;
}

void USBZCheatManager::ViewTarget(int32 PlayerIndex) {
}

void USBZCheatManager::ViewSelfByIndex(int32 PlayerIndex) {
}

void USBZCheatManager::Trace(TEnumAsByte<ECollisionChannel> CollisionChannel, FName Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent) {
}

void USBZCheatManager::ToggleInvisiblePlayer(int32 PlayerIndex) {
}

void USBZCheatManager::ToggleInaudiblePlayer(int32 PlayerIndex) {
}

void USBZCheatManager::ToggleGod(int32 PlayerIndex) {
}

void USBZCheatManager::ToggleDebugCameraAndTeleport() {
}

void USBZCheatManager::ToggleCrouchedTarget(int32 PlayerIndex) {
}

void USBZCheatManager::ThrowItem(int32 PlayerIndex) {
}

void USBZCheatManager::TasePlayer(int32 PlayerIndex) {
}

void USBZCheatManager::SurrenderTarget(int32 PlayerIndex) {
}

void USBZCheatManager::SubduePlayer(int32 PlayerIndex) {
}

void USBZCheatManager::StartEndlessAssault() {
}

void USBZCheatManager::SpawnFBI() {
}

void USBZCheatManager::SpawnAllAITypes(int32 Count, float Distance, float Offset, float Yaw, int32 PlayerIndex) {
}

void USBZCheatManager::Spawn(const FName& AssetName, int32 Count, float Distance, int32 PlayerIndex, float Yaw) {
}

void USBZCheatManager::SimulateChallengeNotificationReceived() {
}

void USBZCheatManager::SetToolAmmo(int32 Count, int32 PlayerIndex) {
}

void USBZCheatManager::SetTool(const FName& ToolDataName, int32 PlayerIndex) {
}

void USBZCheatManager::SetThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetThrowable(const FName& ThrowableDataName, int32 ThrowableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetTargetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex) {
}

void USBZCheatManager::SetTargetEquippableIndexTarget(int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetTargetEquippableIndex(int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetTargetCharacterStance(ESBZCharacterStance Stance, int32 PlayerIndex) {
}

void USBZCheatManager::SetSkill(const FName& SkillDataName, bool bIsAcquired, int32 PlayerIndex) {
}

void USBZCheatManager::SetSharedTagCount(const FName& Tag, int32 Count) {
}

void USBZCheatManager::SetRegisterRewardPrints(bool bIsRegistered) {
}

void USBZCheatManager::SetPreMatchInfamyExperience(int32 Experience, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlayerName(const FString& Name, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlayerMask(const FName& PlayerMaskName, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlayerCharacter(const FName& CharacterClassName, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlayerArmor(const FName& PlayerArmorName, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetPlaceable(const FName& PlaceableDataName, int32 PlaceableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetOverkillWeaponProgress(float InProgress, int32 PlayerIndex) {
}

void USBZCheatManager::SetOptionalMilestonePassed(const FString& OptionalMilestoneName) {
}

void USBZCheatManager::SetMissionFailedEnabled(bool bIsEnabled) {
}

void USBZCheatManager::SetMilestonesPassedStealth(int32 MilestonesPassed) {
}

void USBZCheatManager::SetMilestonesPassedLoud(int32 MilestonesPassed) {
}

void USBZCheatManager::SetMilestonePassed(const FString& MilestoneName) {
}

void USBZCheatManager::SetMaxAICrewCountOverride(int32 MaxAICrewCount) {
}

void USBZCheatManager::SetMarkedTarget(bool bIsMarked, int32 PlayerIndex) {
}

void USBZCheatManager::SetLooseTagCount(const FName& Tag, int32 Count, int32 PlayerIndex) {
}

void USBZCheatManager::SetLastArrestedByGuard(bool bIsLastArrestedByGuard, int32 PlayerIndex) {
}

void USBZCheatManager::SetJesus(bool bIsJesus, int32 PlayerIndex) {
}

void USBZCheatManager::SetInvisiblePlayer(bool bIsInvisible, int32 PlayerIndex) {
}

void USBZCheatManager::SetInteractorModeIndex(int32 ModeIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetInfiniteAmmo(bool bHasInifinteAmmo, int32 PlayerIndex) {
}

void USBZCheatManager::SetInfamyLevelExperience(int32 Level, int32 Experience) {
}

void USBZCheatManager::SetInfamyLevel(int32 Amount, int32 PlayerIndex) {
}

void USBZCheatManager::SetInfamyExperience(int32 Amount, int32 PlayerIndex) {
}

void USBZCheatManager::SetInaudiblePlayer(bool bIsInaudible, int32 PlayerIndex) {
}

void USBZCheatManager::SetHeistState(EPD3HeistState HeistState) {
}

void USBZCheatManager::SetGod(bool bIsGod, int32 PlayerIndex) {
}

void USBZCheatManager::SetFriendlyFireSettings(int32 Value) {
}

void USBZCheatManager::SetEquippedTarget(bool bIsEquipped, int32 PlayerIndex) {
}

void USBZCheatManager::SetEquippableWeaponPreset(const FString& WeaponPresetGuid, int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetEquippablePreset(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetEquippablePart(const FName& SlotDataName, const FName& PartDataName, int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetEquippable(const FName& EquippableDataName, int32 EquippableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetDrawTransformEnabled(bool bIsEnabled) {
}

void USBZCheatManager::SetDrawTransform(float X, float Y, float Z, float Yaw, float Pitch, float Roll, float ScaleX, float ScaleY, float ScaleZ) {
}

void USBZCheatManager::SetDifficulty(ESBZDifficulty Difficulty) {
}

void USBZCheatManager::SetCurrency(ESBZCurrencyCode Type, int32 Amount, int32 PlayerIndex) {
}

void USBZCheatManager::SetCrouchedTarget(bool bIsCrouched, int32 PlayerIndex) {
}

void USBZCheatManager::SetAssaultLevelProgression(float Progression) {
}

void USBZCheatManager::SetAssaultActive(bool bIsActive) {
}

void USBZCheatManager::SetAmmoLoaded(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetAmmoInventory(float NewAmmoCount, int32 WeaponIndex, int32 PlayerIndex) {
}

void USBZCheatManager::SetAllSkills(bool bIsAcquired, int32 PlayerIndex) {
}

void USBZCheatManager::SetAddMissionFailedTimeout(float AddTimeout) {
}

void USBZCheatManager::SecureBag(int32 Count, const FName& AssetName) {
}

void USBZCheatManager::SecureAllAvailableLoot(const bool bClearClaim) {
}

void USBZCheatManager::ReviveTarget(int32 PlayerIndex) {
}

void USBZCheatManager::RevivePlayer(int32 PlayerIndex) {
}

void USBZCheatManager::ResetCVars() {
}

void USBZCheatManager::RequestMissionSuccess() {
}

void USBZCheatManager::RequestMissionFail() {
}

void USBZCheatManager::RequestMissionEnd(ESBZEndMissionResult Result, int32 OutroVariation) {
}

void USBZCheatManager::ReportBug(const FString& Description, bool bIsEverywhere, bool bIsBlockerChecked, bool bIsInteractableChecked) {
}

void USBZCheatManager::RemoveCurrency(ESBZCurrencyCode Type, int32 Amount) {
}

void USBZCheatManager::RefreshPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex) {
}

void USBZCheatManager::RebuildAssetLookup() {
}

void USBZCheatManager::PrintWorldInfo(int32 PlayerIndex) {
}

void USBZCheatManager::PrintTargetTagChanges(bool bIsPrintEnabled, const FName& Tag, int32 PlayerIndex) {
}

void USBZCheatManager::PrintTarget(int32 PlayerIndex) {
}

void USBZCheatManager::PrintTagChanges(bool bIsPrintEnabled, const FName& Tag, int32 PlayerIndex) {
}

void USBZCheatManager::PrintServerWorldInfo(int32 PlayerIndex) {
}

void USBZCheatManager::PrintRewardLogEvent(const FSBZEndMissionResultData& EndMissionResultData) {
}

void USBZCheatManager::PrintPlayerIDArray() {
}

void USBZCheatManager::PrintMissionSeed() {
}

void USBZCheatManager::PrintExperienceMilestone(const ESBZMilestoneType MilestoneType, const FString& MilestoneName) {
}

void USBZCheatManager::PrintAnimNotifies(const FName& NotifyName, bool bIsOnlyMontages) {
}

void USBZCheatManager::PrintAllInteractable(bool bIsTemplate) {
}

void USBZCheatManager::PossessTarget(int32 PlayerIndex) {
}

void USBZCheatManager::PossessSelf(int32 PlayerIndex) {
}

void USBZCheatManager::PerceptionOnAllAI(bool bShouldHavePerception) {
}

void USBZCheatManager::OverlapSphere(TEnumAsByte<ECollisionChannel> CollisionChannel, const FName& Profile, bool bIsObjectType, bool bIsComplex, float Distance, int32 MaxHitCount, float Radius, float DrawDuration, bool bIsDrawPersistent) {
}

void USBZCheatManager::LogSceneComponents() {
}

void USBZCheatManager::LobotomizeCrewAI() {
}

void USBZCheatManager::LobotomizeAllAI() {
}

void USBZCheatManager::ListenToRewardLogs() {
}

void USBZCheatManager::KillTarget(int32 PlayerIndex) {
}

void USBZCheatManager::KillPlayer(int32 PlayerIndex) {
}

void USBZCheatManager::KillAllAI() {
}

void USBZCheatManager::InteractAITarget(ESBZInteractionAction Action, int32 PlayerIndex) {
}

void USBZCheatManager::InputVectorAxisTarget(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex) {
}

void USBZCheatManager::InputVectorAxisPlayer(const FName& AxisName, float X, float Y, float Z, int32 PlayerIndex) {
}

void USBZCheatManager::InputKeyTarget(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex) {
}

void USBZCheatManager::InputKeyPlayer(const FKey& Key, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex) {
}

void USBZCheatManager::InputAxisTarget(const FName& AxisName, float InputValue, int32 PlayerIndex) {
}

void USBZCheatManager::InputAxisPlayer(const FName& AxisName, float InputValue, int32 PlayerIndex) {
}

void USBZCheatManager::InputActionTarget(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, bool bIsReleaseCancelingAbility, int32 PlayerIndex) {
}

void USBZCheatManager::InputActionPlayer(const FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, int32 PlayerIndex) {
}

void USBZCheatManager::GrantUserEntitlement(const FString& AccelByteItemIdString, const FString& AccelByteItemSku, int32 PlayerIndex) {
}

void USBZCheatManager::GrabInstantLoot() {
}

void USBZCheatManager::GiveToolAmmo(int32 Count, int32 PlayerIndex) {
}

void USBZCheatManager::GiveThrowableAmmo(int32 Count, int32 ThrowableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::GivePlaceableAmmo(int32 Count, int32 PlaceableIndex, int32 PlayerIndex) {
}

void USBZCheatManager::GiveAmmo(int32 Amount, int32 WeaponIndex, int32 PlayerIndex) {
}

void USBZCheatManager::GamepadOpenInGameCheatMenu(FKey Key) {
}

void USBZCheatManager::GainPlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, bool bIsRefreshAllowed, int32 PlayerIndex) {
}

void USBZCheatManager::FindClassReferences(const FName& ClassName, bool bIsSubClassesIncluded, bool bIsBlueprintsIncluded, bool bIsAssetsLoaded) {
}

void USBZCheatManager::FindBlocker(bool bIsComplex, float TraceDistance, float TraceRadius, float OverlapDistance, float OverlapRadius, int32 MaxHitCountTrace, int32 MaxHitCountOverlap, float DrawDuration, bool bIsDrawPersistent) {
}

void USBZCheatManager::EquipOverkillWeapon(int32 PlayerIndex) {
}

void USBZCheatManager::DumpAllPlayerStatistics(int32 PlayerIndex) {
}

void USBZCheatManager::DumpAllPlayersInfamyAndPlatform() {
}

void USBZCheatManager::DumpAllPlayersAccelByteDisplayName() {
}

void USBZCheatManager::DestroyTargetAI(int32 PlayerIndex) {
}

void USBZCheatManager::DestroyAllDebris() {
}

void USBZCheatManager::DestroyAllAI(bool bOnlyRagdolls) {
}

void USBZCheatManager::DefeatTarget(int32 PlayerIndex) {
}

void USBZCheatManager::DefeatPlayer(bool bIsDirectIntoCustody, int32 PlayerIndex) {
}

void USBZCheatManager::DebugVehicleSplineData() {
}

void USBZCheatManager::DebugShowSubtitle(const FString& LocID) {
}

void USBZCheatManager::DebugCreateProjectileImpact() {
}

void USBZCheatManager::DebugCreateFootstepImpact() {
}

void USBZCheatManager::DebugCreateExplosionImpact() {
}

void USBZCheatManager::DebugCreateBloodSplatterImpact() {
}

void USBZCheatManager::DamagePlayer(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex) {
}

void USBZCheatManager::DamageCharacter(float Damage, ESBZDamageWeight DamageWeight, int32 DamageWeightModifier, const FName& DamageTypeName, int32 PlayerIndex) {
}

void USBZCheatManager::CuffPlayer(int32 PlayerIndex) {
}

void USBZCheatManager::ConsumePlayerAbilityBuff(ESBZPlayerAbilityBuffType Type, int32 PlayerIndex) {
}

void USBZCheatManager::ChangeStatCode(const FString& StatCode, int32 Count, int32 PlayerIndex) {
}

void USBZCheatManager::ChangeAssaultDrama(float Amount) {
}

void USBZCheatManager::CallDispatcher(EPD3DispatchCaller Caller, EPD3DispatchCallerReason Reason) {
}

void USBZCheatManager::ApplyGameplayEffectTarget(const FName& AssetName, float Duration, const FString& NameMagnitudeString, int32 PlayerIndex) {
}

void USBZCheatManager::AddCurrency(ESBZCurrencyCode Type, int32 Amount) {
}


