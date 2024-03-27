#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "OnWeaponButtonSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponButtonSelected, ESBZEquippableLoadoutSlot, EquippableSlot, int32, ActiveWeaponIndex);

