#include "SBZGameInstance.h"

#include "SBZWorldLoader.h"
#include "SBZSafeHouseManager.h"
#include "SBZPlatformUserManager.h"
#include "SBZGameStateMachine.h"
#include "SBZOnlineSession.h"
#include "SBZMissionState.h"
#include "SBZGlobalItemDatabase.h"
#include "SBZUIManager.h"

#include "SBZGameEventBroker.h"
#include "SBZOnlineEventBroker.h"
#include "SBZSaveManager.h"
#include "SBZSettingsMenuManager.h"
#include "SBZWeaponConfigManager.h"
#include "SBZCosmeticsManager.h"
#include "SBZWeaponProgressionManager.h"
#include "SBZAssetDatabaseManager.h"
#include "SBZStoreManager.h"
#include "SBZInventoryManager.h"
#include "SBZPlayerStatisticsManager.h"
#include "SBZLoadoutManager.h"
#include "SBZCharacterManager.h"
#include "SBZCurrencyManager.h"
#include "SBZExperienceManager.h"
#include "SBZInfamyManager.h"
#include "SBZSkillManager.h"
#include "SBZPreplanningAssetManager.h"
#include "SBZUE4StatsProfiler.h"
#include "SBZInstantLootManager.h"

#include "SBZGameplayManager.h"
#include "SBZTimeEventManager.h"
#include "SBZAccelByteNetworkErrorManager.h"
#include "SBZItemProgressionManager.h"
#include "SBZAchievementManager.h"
#include "SBZMusicManager.h"
#include "SBZVolumeManager.h"
#include "SBZWwiseMotionManagerComponent.h"
#include "SBZGamepadBindingsManager.h"
#include "SBZListenerManager.h"
#include "SBZSoundEnvironmentManager.h"
#include "SBZChallengeManager.h"
#include "SBZChallengeCategoryManager.h"

#include "GameplayAbilitiesModule.h"
#include "AbilitySystemGlobals.h"

USBZGameInstance::USBZGameInstance() {
    this->GameEventBroker = NULL;
    this->OnlineEventBroker = NULL;
    this->MaskMouldSlot = NULL;
    this->MatchmakingProvider = ESBZMatchmakingProvider::Accelbyte;
    this->HostingProvider = ESBZHostingProvider::EdgeGap;
    this->WwiseInitBank = NULL;
    this->MusicManagerClass = NULL;
    this->MotionManagerClass = NULL;
    this->VolumeManagerClass = NULL;
    this->GamepadBindingsManagerClass = NULL;
    this->ListenerManagerClass = NULL;
    this->SoundEnvironmentManagerClass = NULL;
    this->ChallengeManagerClass = NULL;
    this->ChallengeCategoryManagerClass = NULL;
    this->DSChallengeManagerClass = NULL;
    this->ServerStatusManagerClass = NULL;
    this->UIManagerClass = NULL;
    this->GlobalItemDatabaseClass = NULL;
    this->GlobalQuickStartItemDatabaseClass = NULL;
    this->ChromaSensaIdleAnimationEffect = NULL;
    this->GameStateMachine = NULL;
    this->FramerateLimitOutOfFocus = 30.00f;
    this->SaveManager = NULL;
    this->SettingsMenuManager = NULL;
    this->WeaponConfigManager = NULL;
    this->ArmorManager = NULL;
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
    this->DSChallengeManager = NULL;
    this->ChallengeCategoryManager = NULL;
    this->ServerStatusManager = NULL;
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
    this->LoadProgressionManager = NULL;
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
    this->MergePartyManager = NULL;
    this->PartyMemberDataManager = NULL;
    this->FGRLManager = NULL;
    this->LazyLoadingManager = NULL;
    this->UserManager = NULL;
    this->RequestFeedbackManager = NULL;
    this->PlatformUserManager = NULL;
    this->MetaDataLoader = NULL;
}

void USBZGameInstance::SetDifficulty(ESBZDifficulty InDifficulty) {
  //return Cast<ASBZMissionState>(this->GetWorld()->GetGameState())->SetDifficulty(InDifficulty);
}


void USBZGameInstance::HandleGameStateEntered(FName StateName) {
}

USBZTimeEventManager* USBZGameInstance::GetTimeEventManager() const {
    return this->TimeEventManager;
}

USBZSaveManager* USBZGameInstance::GetSaveManager() const {
    return this->SaveManager;
}

USBZReplayManager* USBZGameInstance::GetReplayManager() const {
    return this->ReplayManager;
}

USBZPlatformUserManager* USBZGameInstance::GetPlatformUserManager() const {
    return this->PlatformUserManager;
}

USBZGlobalItemDatabase* USBZGameInstance::GetGlobalItemDatabase() const {
    return this->GlobalItemDatabase;
}

ESBZDifficulty USBZGameInstance::GetDifficulty() const {
  return Cast<ASBZMissionState>(this->GetWorld()->GetGameState())->GetDifficulty();
}

FString USBZGameInstance::GetBuiltFromChangelist() {
    return TEXT("");
}

FString USBZGameInstance::GetBranch() {
    return TEXT("");
}

void USBZGameInstance::DisplayVersion() {
}

void USBZGameInstance::Init() {
  Super::Init();
  if (!IsRunningCommandlet()) {
    PlatformUserManager = NewObject<USBZPlatformUserManager>();
    GameStateMachine = NewObject<USBZGameStateMachine>();
    GameStateMachine->InitStateMachine();

    //TODO: Slate Input Manager
  }
  // TODO: Load GameUserSettings
}

void USBZGameInstance::InitManagers() {
  GameplayManager = NewObject<USBZGameplayManager>();

  GameEventBroker = NewObject<USBZGameEventBroker>();
  OnlineEventBroker = NewObject<USBZOnlineEventBroker>();
  SaveManager = NewObject<USBZSaveManager>();
  SettingsMenuManager = NewObject<USBZSettingsMenuManager>();
  WeaponConfigManager = NewObject<USBZWeaponConfigManager>();
  WeaponCosmeticsManager = NewObject<USBZCosmeticsManager>();
  WeaponProgressionManager = NewObject<USBZWeaponProgressionManager>();
  AssetDatabaseManager = NewObject<USBZAssetDatabaseManager>();
  StoreManager = NewObject<USBZStoreManager>();
  InventoryManager = NewObject<USBZInventoryManager>();
  PlayerStatisticsManager = NewObject<USBZPlayerStatisticsManager>();
  LoadoutManager = NewObject<USBZLoadoutManager>();
  CharacterManager = NewObject<USBZCharacterManager>();
  CurrencyManager = NewObject<USBZCurrencyManager>();
  ExperienceManager = NewObject<USBZExperienceManager>();
  InfamyManager = NewObject<USBZInfamyManager>();
  SkillManager = NewObject<USBZSkillManager>();
  PreplanningAssetManager = NewObject<USBZPreplanningAssetManager>();
  UE4StatsProfiler = NewObject<USBZUE4StatsProfiler>();
  InstantLootManager = NewObject<USBZInstantLootManager>();

  //SaveManager->Load();

  if (this->GetWorld()->GetGameInstance() && !this->GetWorld()->GetGameInstance()->IsDedicatedServerInstance()) {
    if(MusicManagerClass)
      MusicManager = NewObject<USBZMusicManager>(this, MusicManagerClass);
    if(VolumeManagerClass)
      VolumeManager = NewObject<USBZVolumeManager>(this, VolumeManagerClass);
    if(MotionManagerClass)
      MotionManager = NewObject<USBZWwiseMotionManagerComponent>(this, MotionManagerClass);
    if(GamepadBindingsManagerClass)
      GamepadBindingsManager = NewObject<USBZGamepadBindingsManager>(this, GamepadBindingsManagerClass);

    //SettingsMenuManager->Initialize();
    //VolumeManager->ApplySavedValues();
    //GamepadBindingsManager->ApplySavedValues();

    if(ListenerManagerClass)
      ListenerManager = NewObject<USBZListenerManager>(this, ListenerManagerClass);
    if(SoundEnvironmentManagerClass)
      SoundEnvironmentManager = NewObject<USBZSoundEnvironmentManager>(this, SoundEnvironmentManagerClass);
    if(UIManagerClass)
      UIManager = NewObject<USBZUIManager>(this, UIManagerClass);
    //UIManager->Init();

    if(ChallengeManagerClass)
      ChallengeManager = NewObject<USBZChallengeManager>(this, ChallengeManagerClass);
    //ChallengeManager->Init();
    if(ChallengeCategoryManagerClass)
      ChallengeCategoryManager = NewObject<USBZChallengeCategoryManager>(this, ChallengeCategoryManagerClass);
    //ChallengeCategoryManager->Init();

    TimeEventManager = NewObject<USBZTimeEventManager>();
    AccelByteNetworkPoll = NewObject<USBZAccelByteNetworkErrorManager>();
    //AccelByteNetworkPoll->StartPolling();

    ItemProgressionManager = NewObject<USBZItemProgressionManager>();
    //ItemProgressionManager->Init();

    //StoreManager->Init();

    AchievementManager = NewObject<USBZAchievementManager>();
    //AchievementManager->Init();
  }

  GlobalItemDatabase = GlobalItemDatabaseClass ? NewObject<USBZGlobalItemDatabase>(this, GlobalItemDatabaseClass) : NewObject<USBZGlobalItemDatabase>();

  //GameplayManager->Initialize();
}

void USBZGameInstance::StartGameInstance() {
  this->InitManagers();

  if (this->GetWorld()->GetGameInstance() && this->GetWorld()->GetGameInstance()->IsDedicatedServerInstance()) {
    Super::StartGameInstance();
    GameStateMachine->Start();
  }
  else {
    GameStateMachine->Start();
    Super::StartGameInstance();
  }
}

#if WITH_EDITOR
FGameInstancePIEResult USBZGameInstance::StartPlayInEditorGameInstance(ULocalPlayer* LocalPlayer, const FGameInstancePIEParameters& Params) {
  this->InitManagers();

  GameStateMachine->Start();

  return Super::StartPlayInEditorGameInstance(LocalPlayer, Params);
}
#endif

