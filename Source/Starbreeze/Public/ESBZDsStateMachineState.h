#pragma once
#include "CoreMinimal.h"
#include "ESBZDsStateMachineState.generated.h"

UENUM(BlueprintType)
enum ESBZDsStateMachineState {
    SM_DsActionPhase,
    SM_DsResult,
    SM_DsWaitingForPlayers,
    SM_DsLoading,
    SM_DsRestartLevel,
    SM_DsUndefined,
};

