#pragma once
#include "CoreMinimal.h"
#include "SBZOnSelectorOptionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSelectorOptionChanged, int32, NewIndex);

