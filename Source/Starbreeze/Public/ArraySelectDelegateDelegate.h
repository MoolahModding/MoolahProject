#pragma once
#include "CoreMinimal.h"
#include "ArraySelectDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FArraySelectDelegate, UObject*, Object);

