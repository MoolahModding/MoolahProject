#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Engine/EngineTypes.h"
#include "ESBZCurrencyCode.h"
#include "ESBZDebugNetEmulationTarget.h"
#include "ESBZDebugNetEmulationType.h"
#include "ESBZGameMachineStateError.h"
#include "SBZDebugSelection.h"
#include "SBZCheatManagerBase.generated.h"

class AActor;
class UInputComponent;
class USBZAccelByteAdminHelper;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCheatManagerBase : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZDebugSelection Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZDebugSelection LastSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteAdminHelper* AccelByteAdminHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZDebugNetEmulationType SelectedEmulationType;
    
public:
    USBZCheatManagerBase();
    UFUNCTION(Exec)
    void VoteRestartLevel();
    
    UFUNCTION(Exec)
    void UnselectSocket(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void UnselectComponent(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void Unselect(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ToggleMuteMusic();
    
    UFUNCTION(Exec)
    void ToggleInGameCheatMenu();
    
    UFUNCTION(Exec)
    void ToggleDrawDebugSpread();
    
    UFUNCTION(Exec)
    void ToggleCVar(const FString& CVar, int32 First, int32 Second);
    
    UFUNCTION(Exec)
    void SimulateLobbyConnectSuccess();
    
    UFUNCTION(Exec)
    void SimulateLobbyCloseConnection();
    
    UFUNCTION(Exec)
    void SetPreMatchInfamyExperience(int32 Experience, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetPaused(bool bIsPaused);
    
    UFUNCTION(Exec)
    void SetNetEmulationType(ESBZDebugNetEmulationType Type, ESBZDebugNetEmulationTarget Target);
    
    UFUNCTION(Exec)
    void SetListenerEnabled(bool bIsEnabled);
    
    UFUNCTION(Exec)
    void SetInputTypeOverride(int32 Override);
    
    UFUNCTION(Exec)
    void SetInfamyLevelExperience(int32 Level, int32 Experience);
    
    UFUNCTION(Exec)
    void SetInfamyLevel(int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetInfamyExperience(int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetDebugEarnedExperiencePoints(int32 EarnedExperiencePoints);
    
    UFUNCTION(Exec)
    void SetCurrency(ESBZCurrencyCode Type, int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetCulture(const FString& Name);
    
    UFUNCTION(Exec)
    void SetCameraMode(const FName& CameraMode, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SetAudioRTPCValue(const FName& Name, float Value, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ServerCommand(const FString& Command, bool bIsExecutedOnAll, bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectTarget(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectSocketName(const FName& Name, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectSocketIndex(int32 Index, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectParentSocket(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectParentActor(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectLast(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectComponentName(const FName& Name, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectComponentIndex(int32 Index, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectComponentClass(const FName& ClassName, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectChild(int32 Index, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectActorName(const FName& Name, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SelectActorClass(const FName& ClassName, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void SaveProgressionSaveGame();
    
    UFUNCTION(Exec)
    void ResetSettingsSaveGame();
    
    UFUNCTION(Exec)
    void ResetProgressionSaveGame();
    
    UFUNCTION(Exec)
    void ResetMyAccount(const FString& Password);
    
    UFUNCTION(Exec)
    void RequestSwitchUser();
    
    UFUNCTION(Exec)
    void RequestGameError(ESBZGameMachineStateError State, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void RemoveCurrency(ESBZCurrencyCode Type, int32 Amount, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintWarning(const FString& Text, bool bIsDecodingNeeded) const;
    
    UFUNCTION(Exec)
    void PrintVersion();
    
    UFUNCTION(Exec)
    void PrintTargetAbilitySystem(bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintStuckInfo();
    
    UFUNCTION(Exec)
    void PrintSelectionHierarchy(bool bIsChildActorIncluded, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintSelection(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintLog(const FString& Text, bool bIsDecodingNeeded) const;
    
    UFUNCTION(Exec)
    void PrintInputEnabledBothCurrent();
    
    UFUNCTION(Exec)
    void PrintInputEnabled(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void PrintError(const FString& Text, bool bIsDecodingNeeded) const;
    
    UFUNCTION(Exec)
    void PrintAbilitySystemBothCurrent();
    
    UFUNCTION(Exec)
    void PrintAbilitySystem(int32 PlayerIndex);
    
protected:
    UFUNCTION()
    void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(Exec)
    void LoadProgressionSaveGame();
    
    UFUNCTION(Exec)
    void FetchAllVendorItems(int32 MaxCount);
    
    UFUNCTION(Exec)
    void FakeInvite(const FString& UserId, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ExecF(const FString& File);
    
    UFUNCTION(Exec)
    void DumpWeaponPresetAssets();
    
    UFUNCTION(Exec)
    void DumpAssetDatabase();
    
    UFUNCTION(Exec)
    void DumpAllPlayerStatistics(int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DumpAllPlayersInfamyAndPlatform();
    
    UFUNCTION(Exec)
    void DumpAllPlayersAccelByteDisplayName();
    
    UFUNCTION(Exec)
    void DumpActiveLoadout();
    
    UFUNCTION(Exec)
    void DisconnectServer(bool bIsGraceful);
    
    UFUNCTION(Exec)
    void DisconnectPlayer(bool bIsLocallyDisconnected, bool bIsGraceful, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void DisableTimeouts();
    
    UFUNCTION(Exec)
    void DeleteProgressionSaveGame();
    
    UFUNCTION(Exec)
    void DeleteMyAccount();
    
    UFUNCTION(Exec)
    void DebugVoteRecall();
    
    UFUNCTION(Exec)
    void DebugVotePositive();
    
    UFUNCTION(Exec)
    void DebugVoteNegative();
    
    UFUNCTION(Exec)
    void DebugVoteInit();
    
    UFUNCTION(Exec)
    void DebugIncrementPlayerStat(const FString& StatCode, int32 Increment);
    
    UFUNCTION(Exec)
    void DebugChallengeRecords(const FString& Tag, const FString& Status, int32 Offset, int32 Limit);
    
    UFUNCTION(Exec)
    void CompleteChallenge(int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void ClearFriends();
    
    UFUNCTION(Exec)
    void ChangeStatCode(const FString& StatCode, int32 Count, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void AddCurrency(ESBZCurrencyCode Type, int32 Amount, int32 PlayerIndex);
    
};

