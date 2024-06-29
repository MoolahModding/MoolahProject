#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SBZStateMachineDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZStateMachineDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZStateMachineDebug(const FObjectInitializer& ObjectInitializer);

};

