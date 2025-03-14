#pragma once
#include "CoreMinimal.h"
#include "OnArmorCategoryButtonSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnArmorCategoryButtonSelected, int32, OutArmorChunkIndex);

