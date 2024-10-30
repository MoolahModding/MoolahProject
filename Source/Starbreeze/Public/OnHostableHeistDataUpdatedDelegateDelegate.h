#pragma once
#include "CoreMinimal.h"
#include "SBZServerBrowserHeistCollection.h"
#include "OnHostableHeistDataUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostableHeistDataUpdatedDelegate, const TArray<FSBZServerBrowserHeistCollection>&, HostableHeistCollections);

