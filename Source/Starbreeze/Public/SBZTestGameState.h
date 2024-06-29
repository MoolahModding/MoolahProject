#pragma once
#include "CoreMinimal.h"
#include "PD3HeistGameState.h"
#include "SBZTestGameState.generated.h"

UCLASS(Blueprintable)
class ASBZTestGameState : public APD3HeistGameState {
    GENERATED_BODY()
public:
    ASBZTestGameState(const FObjectInitializer& ObjectInitializer);

};

