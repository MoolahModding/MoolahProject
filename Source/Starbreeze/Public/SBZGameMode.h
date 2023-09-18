#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "SBZGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZGameMode : public ASBZGameModeBase {
    GENERATED_BODY()
public:
    ASBZGameMode(const FObjectInitializer& ObjectInitializer);

};

