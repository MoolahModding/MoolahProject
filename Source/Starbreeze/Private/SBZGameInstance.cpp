#include "SBZGameInstance.h"

void USBZGameInstance::SetDifficulty(ESBZDifficulty InDifficulty) {
}


void USBZGameInstance::HandleGameStateEntered(FName StateName) {
}

USBZSaveManager* USBZGameInstance::GetSaveManager() const {
    return NULL;
}

USBZReplayManager* USBZGameInstance::GetReplayManager() const {
    return NULL;
}

USBZPlatformUserManager* USBZGameInstance::GetPlatformUserManager() const {
    return NULL;
}

USBZGlobalItemDatabase* USBZGameInstance::GetGlobalItemDatabase() const {
    return NULL;
}

ESBZDifficulty USBZGameInstance::GetDifficulty() const {
    return ESBZDifficulty::Default;
}

FString USBZGameInstance::GetBuiltFromChangelist() {
    return TEXT("");
}

void USBZGameInstance::DisplayVersion() {
}

USBZGameInstance::USBZGameInstance() {
    this->GameEventBroker = NULL;
    this->OnlineEventBroker = NULL;
    this->WwiseInitBank = NULL;
    this->MusicManagerClass = NULL;
    this->MotionManagerClass = NULL;
    this->VolumeManagerClass = NULL;
    this->GamepadBindingsManagerClass = NULL;
    this->ListenerManagerClass = NULL;
    this->SoundEnvironmentManagerClass = NULL;
    this->ChallengeManagerClass = NULL;
    this->ChallengeCategoryManagerClass = NULL;
    this->UIManagerClass = NULL;
    this->GlobalItemDatabaseClass = NULL;
    this->GlobalQuickStartItemDatabaseClass = NULL;
    this->GameStateMachine = NULL;
    this->FramerateLimitOutOfFocus = 30.00f;
    this->SaveManager = NULL;
    this->SettingsMenuManager = NULL;
    this->WeaponConfigManager = NULL;
    this->WeaponCosmeticsManager = NULL;
    this->WeaponProgressionManager = NULL;
    this->AssetDatabaseManager = NULL;
    this->StoreManager = NULL;
    this->InventoryManager = NULL;
    this->PlayerStatisticsManager = NULL;
    this->LoadoutManager = NULL;
    this->MusicManager = NULL;
    this->VolumeManager = NULL;
    this->MotionManager = NULL;
    this->GamepadBindingsManager = NULL;
    this->ListenerManager = NULL;
    this->SoundEnvironmentManager = NULL;
    this->AccelByteUser = NULL;
    this->ChallengeManager = NULL;
    this->ChallengeCategoryManager = NULL;
    this->UIManager = NULL;
    this->AnalyticsManager = NULL;
    this->WorldLoader = NULL;
    this->ReplayManager = NULL;
    this->SafeHouseManager = NULL;
    this->GlobalItemDatabase = NULL;
    this->CharacterManager = NULL;
    this->CurrencyManager = NULL;
    this->ExperienceManager = NULL;
    this->InstantLootManager = NULL;
    this->InfamyManager = NULL;
    this->SkillManager = NULL;
    this->PreplanningAssetManager = NULL;
    this->AchievementManager = NULL;
    this->TimeEventManager = NULL;
    this->AccelByteNetworkPoll = NULL;
    this->ItemProgressionManager = NULL;
    this->BanPlayerManager = NULL;
    this->UE4StatsProfiler = NULL;
    this->GameplayManager = NULL;
    this->FGRLManager = NULL;
    this->PlatformUserManager = NULL;
}

