#pragma once
#include "CoreMinimal.h"
#include "ESBZGameStateMachineState.h"
#include "ESBZOnlineSessionPhase.h"
#include "ESBZReturnToIISReason.h"
#include "ESBZReturnToLoginReason.h"
#include "ESBZReturnToMainMenuReason.h"
#include "SBZCommonStateMachine.h"
#include "SBZEndMissionRequestData.h"
#include "SBZLoginFieldInfo.h"
#include "SBZOnlineMatchmakingParams.h"
#include "SBZRegistrationFieldInfo.h"
#include "SBZReplayInfo.h"
#include "SBZClientStateMachine.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class STARBREEZE_API USBZClientStateMachine : public USBZCommonStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TEnumAsByte<ESBZGameStateMachineState>> StateEnums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZClientStateMachine();

    UFUNCTION(BlueprintCallable)
    void RequestTravelToServer();
    
    UFUNCTION(BlueprintCallable)
    void RequestSteamLogin();
    
    UFUNCTION(BlueprintCallable)
    void RequestSoloGame(int32 LevelIdx, int32 DifficultyIdx);
    
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
    void RequestLoginWithDeviceID();
    
    UFUNCTION(BlueprintCallable)
    void RequestLogin(const FSBZLoginFieldInfo& LoginFieldInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestGoToLobby();
    
    UFUNCTION(BlueprintCallable)
    void RequestGameStart();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndOutroSequence();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void RequestDirectJoin();
    
    UFUNCTION(BlueprintCallable)
    void RequestDefaultMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateAccount(const FSBZRegistrationFieldInfo& RegistrationFieldInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAppliedPreplanningAsset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserSwitchDuringInvite();
    
    UFUNCTION(BlueprintCallable)
    void OnPopUpClosedIsNotPartyLeader(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyHostEnteredMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyHostEnteredMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyHostEnteredLobby();
    
public:
    UFUNCTION(BlueprintCallable)
    bool isPreMatchAsyncLoadingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedOutro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineSessionPhase GetSessionPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentStateNameString();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPreplanningAsset(const FString& ItemSku);
    
};

