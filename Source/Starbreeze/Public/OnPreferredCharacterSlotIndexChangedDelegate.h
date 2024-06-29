#pragma once
#include "CoreMinimal.h"
#include "OnPreferredCharacterSlotIndexChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreferredCharacterSlotIndexChanged, int32, NewIndex);

