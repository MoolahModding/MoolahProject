#pragma once
#include "CoreMinimal.h"
#include "SBZOnInteractionDelegate.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnInteraction, USBZBaseInteractableComponent*, Interactable, USBZInteractorComponent*, Interactor, bool, bIsLocallyControlledInteractor);

