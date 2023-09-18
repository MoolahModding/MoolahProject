#pragma once
#include "CoreMinimal.h"
#include "SBZGameSessionBase.h"
#include "PD3HeistGameSession.generated.h"

UCLASS(Blueprintable)
class APD3HeistGameSession : public ASBZGameSessionBase {
    GENERATED_BODY()
public:
    APD3HeistGameSession(const FObjectInitializer& ObjectInitializer);

};

