#pragma once
#include "CoreMinimal.h"
#include "PD3HeistGameMode.h"
#include "SBZTestGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZTestGameMode : public APD3HeistGameMode {
    GENERATED_BODY()
public:
    ASBZTestGameMode(const FObjectInitializer& ObjectInitializer);

};

