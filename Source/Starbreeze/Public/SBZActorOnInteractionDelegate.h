#pragma once
#include "CoreMinimal.h"
#include "SBZActorOnInteractionDelegate.generated.h"

class ASBZInteractionActor;
class USBZInteractorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZActorOnInteraction, ASBZInteractionActor*, Interactable, USBZInteractorComponent*, Interactor);

