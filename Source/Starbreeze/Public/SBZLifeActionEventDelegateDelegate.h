#pragma once
#include "CoreMinimal.h"
#include "SBZLifeActionEventDelegateDelegate.generated.h"

class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZLifeActionEventDelegate, ASBZCharacter*, Character, USBZLifeActionInstance*, ActionInstance, USBZLifeActionSlot*, ActionSlot);

