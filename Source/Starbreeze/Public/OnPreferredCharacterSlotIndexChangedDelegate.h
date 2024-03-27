#pragma once
#include "CoreMinimal.h"
#include "OnPreferredCharacterSlotIndexChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreferredCharacterSlotIndexChanged, int32, NewIndex);

