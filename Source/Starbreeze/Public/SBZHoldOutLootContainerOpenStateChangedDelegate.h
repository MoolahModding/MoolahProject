#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutLootContainerOpenStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZHoldOutLootContainerOpenStateChanged, bool, bIsOpen, bool, bDoCosmetics);

