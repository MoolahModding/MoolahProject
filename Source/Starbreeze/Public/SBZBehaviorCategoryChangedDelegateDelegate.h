#pragma once
#include "CoreMinimal.h"
#include "ESBZAIBehaviorCategory.h"
#include "SBZBehaviorCategoryChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZBehaviorCategoryChangedDelegate, ESBZAIBehaviorCategory, OldCategory, ESBZAIBehaviorCategory, NewCategory);

