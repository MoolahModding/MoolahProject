#pragma once
#include "CoreMinimal.h"
#include "SBZOnInteractableStateChangedDelegateDelegate.generated.h"

class USBZBaseInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnInteractableStateChangedDelegate, const USBZBaseInteractableComponent*, InteractableComponent, bool, bInNewState);

