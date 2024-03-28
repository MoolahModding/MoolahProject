#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZCharacterInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCharacterInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZCharacterInteractableComponent();
};

