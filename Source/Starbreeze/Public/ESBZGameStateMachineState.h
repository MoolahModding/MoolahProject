#pragma once
#include "CoreMinimal.h"
#include "ESBZGameStateMachineState.generated.h"

UENUM(BlueprintType)
enum ESBZGameStateMachineState {
    SM_NotLoggedIn,
    SM_SubsystemInitialisation,
    SM_WaitFirstGameStart,
    SM_WaitSoloGame,
    SM_GameStart,
    SM_Matchmaking,
    SM_Lobby,
    SM_P2PHost,
    SM_WaitingActionPhase,
    SM_WaitingActionPhaseHost,
    SM_WaitingActionPhaseClient,
    SM_WaitingActionPhaseDropIn,
    SM_FunctionalTest,
    SM_JobOverview,
    SM_JobOverviewDropIn,
    SM_JobOverviewDirectJoin,
    SM_ActionPhase,
    SM_HostMigration,
    SM_WaitMainMenu,
    SM_WaitingResult,
    SM_Result,
    SM_GameError,
    SM_BackendError,
    SM_WaitingReturnToIIS,
    SM_WaitingReplay,
    SM_Replay,
    SM_Outro,
    SM_WaitingRestartLevel,
    SM_Undefined,
};

