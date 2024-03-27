#pragma once
#include "CoreMinimal.h"
#include "SBZCookingStationIngredientAddedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZCookingStationIngredientAddedDelegate, bool, bIsCorrect);

