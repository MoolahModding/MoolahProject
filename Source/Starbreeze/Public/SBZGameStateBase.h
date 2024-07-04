#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SBZGameStateBase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    ASBZGameStateBase(const FObjectInitializer& ObjectInitializer);

};

