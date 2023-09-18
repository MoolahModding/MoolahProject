#pragma once
#include "CoreMinimal.h"
#include "OnCategoryButtonSelectedDelegate.generated.h"

class USBZModularPartSlotBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCategoryButtonSelected, const USBZModularPartSlotBase*, ModSlot);

