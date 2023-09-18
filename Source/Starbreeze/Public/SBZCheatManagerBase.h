#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Engine/EngineTypes.h"
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
    
public:
    USBZCheatManagerBase();

    UFUNCTION(BlueprintCallable, Exec)
    void VoteRestartLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnselectSocket(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnselectComponent(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Unselect(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMuteMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInGameCheatMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawDebugSpread();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCVar(const FString& CVar, int32 First, int32 Second);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInputTypeOverride(int32 Override);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugEarnedExperiencePoints(int32 EarnedExperiencePoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCulture(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraMode(const FName& CameraMode, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAudioRTPCValue(const FName& Name, float Value, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerCommand(const FString& Command, bool bIsExecutedOnAll, bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectTarget(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectSocketName(const FName& Name, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectSocketIndex(int32 Index, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectParentSocket(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectParentActor(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectLast(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectComponentName(const FName& Name, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectComponentIndex(int32 Index, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectComponentClass(const FName& ClassName, int32 DepthStencil, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectChild(int32 Index, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectActorName(const FName& Name, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectActorClass(const FName& ClassName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveProgressionSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSettingsSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetProgressionSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetMyAccount(const FString& Password);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestSwitchUser();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestGameError(ESBZGameMachineStateError State, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintWarning(const FString& Text, bool bIsDecodingNeeded);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintVersion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTargetAbilitySystem(bool bIsLocallyControlledOnly, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintStuckInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintSelectionHierarchy(bool bIsChildActorIncluded, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintSelection(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintLog(const FString& Text, bool bIsDecodingNeeded);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintInputEnabledBothCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintInputEnabled(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintError(const FString& Text, bool bIsDecodingNeeded);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAbilitySystemBothCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAbilitySystem(int32 PlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void LoadProgressionSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FetchAllVendorItems(int32 MaxCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeInvite(const FString& UserId, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecF(const FString& File);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpWeaponPresetAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAssetDatabase();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActiveLoadout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisconnectServer(bool bIsGraceful);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisconnectPlayer(bool bIsLocallyDisconnected, bool bIsGraceful, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableTimeouts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteProgressionSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteMyAccount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVoteRecall();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVotePositive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVoteNegative();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugVoteInit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugIncrementPlayerStat(const FString& StatCode, int32 Increment);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChallengeRecords(const FString& Tag, const FString& Status, int32 Offset, int32 Limit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearFriends();
    
};

