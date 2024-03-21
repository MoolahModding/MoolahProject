#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZInteractableWindowComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZInteractableWindowComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZInteractableWindowComponent();
};

