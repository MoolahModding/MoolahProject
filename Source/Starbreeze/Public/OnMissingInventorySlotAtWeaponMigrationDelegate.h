#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "OnMissingInventorySlotAtWeaponMigrationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissingInventorySlotAtWeaponMigration, const ESBZEquippableLoadoutSlot, EquippableLoadoutSlot);

