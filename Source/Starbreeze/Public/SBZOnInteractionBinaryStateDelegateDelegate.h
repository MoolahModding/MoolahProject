#pragma once
#include "CoreMinimal.h"
#include "SBZOnInteractionBinaryStateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnInteractionBinaryStateDelegate, bool, BNewState);

