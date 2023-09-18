#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ESBZDifficulty.h"
#include "SBZReplayInfo.h"
#include "SBZGameInstance.generated.h"

class UAkInitBank;
class UClass;
class USBZAccelByteNetworkErrorManager;
class USBZAccelByteUser;
class USBZAchievementManager;
class USBZAnalyticsManager;
class USBZAssetDatabaseManager;
class USBZChallengeCategoryManager;
class USBZChallengeManager;
class USBZCharacterManager;
class USBZCosmeticsManager;
class USBZCurrencyManager;
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
class USBZListenerManager;
class USBZLoadoutManager;
class USBZMusicManager;
class USBZOnlineEventBroker;
class USBZPlatformUserManager;
class USBZPlayerStatisticsManager;
class USBZPreplanningAssetManager;
class USBZReplayManager;
class USBZSafeHouseManager;
class USBZSaveManager;
class USBZSettingsMenuManager;
class USBZSkillManager;
class USBZSoundEnvironmentManager;
class USBZStoreManager;
class USBZTimeEventManager;
class USBZUE4StatsProfiler;
class USBZUIManager;
class USBZVolumeManager;
class USBZWeaponConfigManager;
class USBZWeaponProgressionManager;
class USBZWorldLoader;
class USBZWwiseMotionManagerComponent;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameEventBroker* GameEventBroker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineEventBroker* OnlineEventBroker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkInitBank* WwiseInitBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MusicManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MotionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* VolumeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GamepadBindingsManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListenerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SoundEnvironmentManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ChallengeManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ChallengeCategoryManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GlobalItemDatabaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GlobalQuickStartItemDatabaseClass;
    
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
    USBZChallengeCategoryManager* ChallengeCategoryManager;
    
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
    USBZUE4StatsProfiler* UE4StatsProfiler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameplayManager* GameplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFineGrainedRateLimitManager* FGRLManager;
    
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

