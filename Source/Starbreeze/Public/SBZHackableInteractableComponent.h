#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableComponent.h"
#include "SBZHackableInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHackableInteractableComponent : public USBZInteractableComponent {
    GENERATED_BODY()
public:
    USBZHackableInteractableComponent(const FObjectInitializer& ObjectInitializer);

};

