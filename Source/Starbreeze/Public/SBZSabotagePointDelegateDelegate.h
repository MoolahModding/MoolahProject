#pragma once
#include "CoreMinimal.h"
#include "SBZSabotagePointDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSabotagePointDelegate, bool, bSabotaged);

