#pragma once
#include "CoreMinimal.h"
#include "SBZDynamicAirNavLinkDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZDynamicAirNavLinkDelegate, const AActor*, NavLinkUser);

