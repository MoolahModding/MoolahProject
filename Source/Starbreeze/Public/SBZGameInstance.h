#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ESBZDifficulty.h"
#include "ESBZHostingProvider.h"
#include "ESBZMatchmakingProvider.h"
#include "SBZReplayInfo.h"
#include "Templates/SubclassOf.h"
#include "SBZGameInstance.generated.h"

class UAkInitBank;
class USBZAccelByteNetworkErrorManager;
class USBZAccelByteUser;
class USBZAchievementManager;
class USBZAnalyticsManager;
class USBZAssetDatabaseManager;
class USBZBanPlayerManager;
class USBZChallengeCategoryManager;
class USBZChallengeManager;
class USBZCharacterManager;
class USBZCosmeticsManager;
class USBZCurrencyManager;
class USBZDSChallengeManager;
class USBZExperienceManager;
class USBZFineGrainedRateLimitManager;
class USBZGameEventBroker;
class USBZGameStateMachine;
class USBZGamepadBindingsManager;
class USBZGameplayManager;
class USBZGlobalItemDatabase;
class USBZInfamyManager;
class USBZInstantLootManager;
class USBZInventoryManager;
class USBZItemProgressionManager;
class USBZLazyLoadingManager;
class USBZListenerManager;
class USBZLoadoutManager;
class USBZMergePartyManager;
class USBZMusicManager;
class USBZOnlineEventBroker;
class USBZPartyMemberDataManager;
class USBZPlatformUserManager;
class USBZPlayerStatisticsManager;
class USBZPreplanningAssetManager;
class USBZReplayManager;
class USBZRequestFeedbackManager;
class USBZSafeHouseManager;
class USBZSaveManager;
class USBZServerStatusManager;
class USBZSettingsMenuManager;
class USBZSkillManager;
class USBZSoundEnvironmentManager;
class USBZStoreManager;
class USBZTimeEventManager;
class USBZUE4StatsProfiler;
class USBZUIManager;
class USBZUserManager;
class USBZVolumeManager;
class USBZWeaponConfigManager;
class USBZWeaponProgressionManager;
class USBZWorldLoader;
class USBZWwiseMotionManagerComponent;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Starbreeze)
class STARBREEZE_API USBZGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameEventBroker* GameEventBroker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineEventBroker* OnlineEventBroker;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMatchmakingProvider MatchmakingProvider;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHostingProvider HostingProvider;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkInitBank* WwiseInitBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMusicManager> MusicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZWwiseMotionManagerComponent> MotionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZVolumeManager> VolumeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGamepadBindingsManager> GamepadBindingsManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZListenerManager> ListenerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSoundEnvironmentManager> SoundEnvironmentManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZChallengeManager> ChallengeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZChallengeCategoryManager> ChallengeCategoryManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDSChallengeManager> DSChallengeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZServerStatusManager> ServerStatusManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUIManager> UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGlobalItemDatabase> GlobalItemDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGlobalItemDatabase> GlobalQuickStartItemDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameStateMachine* GameStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FramerateLimitOutOfFocus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSaveManager* SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSettingsMenuManager* SettingsMenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponConfigManager* WeaponConfigManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCosmeticsManager* WeaponCosmeticsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponProgressionManager* WeaponProgressionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAssetDatabaseManager* AssetDatabaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStoreManager* StoreManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryManager* InventoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerStatisticsManager* PlayerStatisticsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadoutManager* LoadoutManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWwiseMotionManagerComponent* MotionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGamepadBindingsManager* GamepadBindingsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZListenerManager* ListenerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSoundEnvironmentManager* SoundEnvironmentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteUser* AccelByteUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChallengeManager* ChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDSChallengeManager* DSChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChallengeCategoryManager* ChallengeCategoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZServerStatusManager* ServerStatusManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAnalyticsManager* AnalyticsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWorldLoader* WorldLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayManager* ReplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSafeHouseManager* SafeHouseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGlobalItemDatabase* GlobalItemDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterManager* CharacterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCurrencyManager* CurrencyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZExperienceManager* ExperienceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInstantLootManager* InstantLootManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInfamyManager* InfamyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSkillManager* SkillManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPreplanningAssetManager* PreplanningAssetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTimeEventManager* TimeEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteNetworkErrorManager* AccelByteNetworkPoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZItemProgressionManager* ItemProgressionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBanPlayerManager* BanPlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUE4StatsProfiler* UE4StatsProfiler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayManager* GameplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMergePartyManager* MergePartyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPartyMemberDataManager* PartyMemberDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFineGrainedRateLimitManager* FGRLManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLazyLoadingManager* LazyLoadingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZRequestFeedbackManager* RequestFeedbackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlatformUserManager* PlatformUserManager;
    
public:
    USBZGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ESBZDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFindReplaysComplete(const TArray<FSBZReplayInfo>& Replays);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEntered(FName StateName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZTimeEventManager* GetTimeEventManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZSaveManager* GetSaveManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZReplayManager* GetReplayManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPlatformUserManager* GetPlatformUserManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGlobalItemDatabase* GetGlobalItemDatabase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuiltFromChangelist();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayVersion();
    
};

