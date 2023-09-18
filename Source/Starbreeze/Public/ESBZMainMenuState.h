#pragma once
#include "CoreMinimal.h"
#include "ESBZMainMenuState.generated.h"

UENUM(BlueprintType)
enum class ESBZMainMenuState : uint8 {
    MainScreen,
    PrePlanning,
    Loadout,
    BlackMarket,
    MatchMaking,
    Options,
    SuitVisualization,
    GlovesVisualization,
};

