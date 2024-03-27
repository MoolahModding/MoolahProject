#pragma once
#include "CoreMinimal.h"
#include "SBZOnFBIActivationDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnFBIActivation, const bool, bIsActive);

