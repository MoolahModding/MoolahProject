#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SBZReplayGameMode.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class STARBREEZE_API ASBZReplayGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ASBZReplayGameMode(const FObjectInitializer& ObjectInitializer);

};

