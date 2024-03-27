#pragma once
#include "CoreMinimal.h"
#include "SBZPawnDynamicDelegateDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPawnDynamicDelegate, APawn*, Pawn);

