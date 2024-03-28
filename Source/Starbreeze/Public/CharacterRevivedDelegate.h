#pragma once
#include "CoreMinimal.h"
#include "SBZReviveEvent.h"
#include "CharacterRevivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterRevived, const FSBZReviveEvent&, ReviveEventData);

