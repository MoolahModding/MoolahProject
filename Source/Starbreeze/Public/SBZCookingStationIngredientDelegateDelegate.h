#pragma once
#include "CoreMinimal.h"
#include "SBZCookingStationIngredientDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZCookingStationIngredientDelegate, int32, NewIngredientIndex);

