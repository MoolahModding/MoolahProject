#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLifeActionTagEventDelegateDelegate.generated.h"

class ASBZCharacter;
class USBZLifeActionSlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZLifeActionTagEventDelegate, ASBZCharacter*, Character, USBZLifeActionSlot*, ActionSlot, const FGameplayTag&, Tag, bool, bActive);

