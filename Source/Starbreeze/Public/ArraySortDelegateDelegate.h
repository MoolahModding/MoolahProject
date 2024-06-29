#pragma once
#include "CoreMinimal.h"
#include "ArraySortDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FArraySortDelegate, UObject*, ObjectA, UObject*, ObjectB);

