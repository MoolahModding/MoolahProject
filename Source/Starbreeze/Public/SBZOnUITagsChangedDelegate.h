#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZOnUITagsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnUITagsChanged, const FGameplayTagContainer&, UITagContainer);

