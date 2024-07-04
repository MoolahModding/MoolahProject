#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZInteractableCarriedBagComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZInteractableCarriedBagComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZInteractableCarriedBagComponent(const FObjectInitializer& ObjectInitializer);

};

