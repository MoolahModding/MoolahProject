#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZLifeActionStopEventDelegateDelegate.generated.h"

class ASBZCharacter;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZLifeActionStopEventDelegate, ASBZCharacter*, Character, USBZLifeActionInstance*, ActionInstance, USBZLifeActionSlot*, ActionSlot, ESBZLifeActionStopReason, Result);

