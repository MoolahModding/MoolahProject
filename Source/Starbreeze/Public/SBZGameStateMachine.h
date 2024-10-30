#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBlackScreenTransitionType.h"
#include "ESBZDifficulty.h"
#include "ESBZGameMachineStateError.h"
#include "ESBZOnlineSessionPhase.h"
#include "ESBZOnlineTacticType.h"
#include "ESBZReturnToIISReason.h"
#include "ESBZReturnToLoginReason.h"
#include "ESBZReturnToMainMenuReason.h"
#include "ESBZSecurityCompany.h"
#include "OnGameStateUIEventDelegateDelegate.h"
#include "OnJobOverviewUIEventDelegateDelegate.h"
#include "OnSendToServerPlayerToReadyDelegateDelegate.h"
#include "OnStateMachineEnteredStateDelegateDelegate.h"
#include "OnStateMachineExitedStateDelegateDelegate.h"
#include "SBZEndMissionRequestData.h"
#include "SBZOnSecurityCompaniesChangedDelegate.h"
#include "SBZOnlineMatchmakingParams.h"
#include "SBZPlayerPressedReadyEventDelegate.h"
#include "SBZPlayerPressedRestartLevelEventDelegate.h"
#include "SBZPlayerReadyEventDelegate.h"
#include "SBZPlayerReadyStatusUpdateDelegate.h"
#include "SBZReplayInfo.h"
#include "SBZSetPlayerReadyTimeoutDelegate.h"
#include "SBZGameStateMachine.generated.h"

class UPD3HeistDataAsset;
class USBZCommonStateMachine;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameStateMachine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineEnteredStateDelegate OnStateMachineEnteredGameStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineEnteredStateDelegate OnStateMachineEnteredMatchmaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineExitedStateDelegate OnStateMachineExitedMatchmaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineEnteredStateDelegate OnStateMachineEnteredLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineExitedStateDelegate OnStateMachineExitedLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStateUIEventDelegate OnJobOverviewReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJobOverviewUIEventDelegate OnJobOverviewComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerPressedReadyEvent OnPlayerPressedReadyRecieved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerReadyEvent OnPlayerReadyRecieved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSetPlayerReadyTimeout OnSetPlayerReadyTimeout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerReadyStatusUpdate OnPlayerReadyStatusUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerPressedRestartLevelEvent OnPlayerPressedRestartLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSendToServerPlayerToReadyDelegate OnSendToServerPlayerToReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSecurityCompaniesChanged OnSecurityCompaniesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCommonStateMachine* StateMachine;
    
public:
    USBZGameStateMachine();

    UFUNCTION(BlueprintCallable)
    void SetMatchmakingTacticType(ESBZOnlineTacticType InTacticType);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingSecurityCompanies(const TArray<ESBZSecurityCompany>& InSecurityCompanies);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingRandomSeed(int32 InRandomSeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchMakingParameters(const FSBZOnlineMatchmakingParams& InMatchmakingParameters);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingLevelIdx(int32 InLevelIdx);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingDifficultyIdx(uint8 InDifficultyIdx);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingDifficulty(ESBZDifficulty InDifficulty, bool bIsSaved);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMatchmakingQuickMatch(bool bInIsQuickMatch);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMatchmakingHost(bool bIsHost);
    
    UFUNCTION(BlueprintCallable)
    void RequestSoloGame(int32 LevelIdx, int32 DifficultyIdx, bool bSkipPreMatch);
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToMainMenu(ESBZReturnToMainMenuReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToLogin(ESBZReturnToLoginReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToIIS(ESBZReturnToIISReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void RequestRestart();
    
    UFUNCTION(BlueprintCallable)
    void RequestReplay(const FSBZReplayInfo& ReplayInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlatformJoin();
    
    UFUNCTION(BlueprintCallable)
    void RequestP2PHost(const FSBZOnlineMatchmakingParams& MatchmakingParameters);
    
    UFUNCTION(BlueprintCallable)
    void RequestMissionEnd(const FSBZEndMissionRequestData& RequestData);
    
    UFUNCTION(BlueprintCallable)
    void RequestMatchmaking(const FSBZOnlineMatchmakingParams& MatchmakingParameters);
    
    UFUNCTION(BlueprintCallable)
    void RequestJobOverviewReady(bool bSetClientReady);
    
    UFUNCTION(BlueprintCallable)
    void RequestJobOverviewComplete(bool bIsClientReady);
    
    UFUNCTION(BlueprintCallable)
    void RequestJobOverviewAllReady(EBlackScreenTransitionType BlackScreenTransitionType);
    
    UFUNCTION(BlueprintCallable)
    void RequestGoToLobby();
    
    UFUNCTION(BlueprintCallable)
    void RequestGameStart();
    
    UFUNCTION(BlueprintCallable)
    void RequestGameError(ESBZGameMachineStateError Error);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndOutroSequence();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void RequestDirectJoin();
    
    UFUNCTION(BlueprintCallable)
    void RequestDefaultMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMatchmakingSecurityCompany(ESBZSecurityCompany InSecurityCompany);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingQuickMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedOutro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineSessionPhase GetSessionPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESBZSecurityCompany> GetMatchmakingSecurityCompanies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESBZSecurityCompany> GetMatchmakingSecuritCompaniesForHeist(UPD3HeistDataAsset* InHeist, ESBZDifficulty InDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchmakingRandomSeed() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZOnlineMatchmakingParams GetMatchMakingParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetMatchmakingLevelIdx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetMatchmakingDifficultyIdx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetMatchmakingDifficulty() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugOnlineTravel(const FString& LevelUrl, bool bIsAbsolute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestSoloGame() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMatchmakingSecurityCompany(ESBZSecurityCompany InSecurityCompany);
    
};

