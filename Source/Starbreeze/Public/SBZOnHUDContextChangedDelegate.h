#pragma once
#include "CoreMinimal.h"
#include "SBZUIHUDContext.h"
#include "SBZOnHUDContextChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnHUDContextChanged, const FSBZUIHUDContext&, OnHUDContextChanged);

