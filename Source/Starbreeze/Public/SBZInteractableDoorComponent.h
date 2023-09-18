#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZInteractableDoorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZInteractableDoorComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZInteractableDoorComponent();

};

