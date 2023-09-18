#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableGate.h"
#include "SBZInteractableWindow.generated.h"

UCLASS(Blueprintable)
class ASBZInteractableWindow : public ASBZInteractableGate {
    GENERATED_BODY()
public:
    ASBZInteractableWindow(const FObjectInitializer& ObjectInitializer);

};

