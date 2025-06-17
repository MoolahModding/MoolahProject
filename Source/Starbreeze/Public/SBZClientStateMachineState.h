#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.h"
#include "SBZCommonStateMachineState.h"
#include "SBZClientStateMachineState.generated.h"

class USBZClientStateMachineStates {
public:
  const static FName NotLoggedIn;
  const static FName SubsystemInitialisation;
  const static FName WaitFirstGameStart;
  const static FName WaitPlayGo;
  const static FName WaitSoloGame;
  const static FName GameStart;
  const static FName Matchmaking;
  const static FName Lobby;
  const static FName P2PHost;
  const static FName ABMatchmaking;
  const static FName ABPreMatch;
  const static FName WaitingActionPhase;
  const static FName WaitingActionPhaseHost;
  const static FName WaitingActionPhaseClient;
  const static FName WaitingActionPhaseDropIn;
  const static FName FunctionalTest;
  const static FName JobOverview;
  const static FName JobOverviewDropIn;
  const static FName JobOverviewDirectJoin;
  const static FName ActionPhase;
  const static FName WaitMainMenu;
  const static FName Result;
  const static FName GameError;
  const static FName BackendError;
  const static FName WaitingReturnToIIS;
  const static FName Outro;
  const static FName WaitingReplay;
  const static FName Replay;
  const static FName WaitingRestartLevel;
};

UCLASS(Blueprintable)
class STARBREEZE_API USBZClientStateMachineState : public USBZCommonStateMachineState {
    GENERATED_BODY()
public:
    USBZClientStateMachineState();

private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkStatusChanged(ESBZServiceStatus ServiceStatus);

public:
    virtual void OnEnter(USBZStateMachineData* InData) override;
};

