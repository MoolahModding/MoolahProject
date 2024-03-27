#pragma once
#include "CoreMinimal.h"
#include "OnIndexChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIndexChanged, int32, NewIndex);

