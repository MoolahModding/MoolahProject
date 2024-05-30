#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "SBZSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class ASBZSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    ASBZSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

