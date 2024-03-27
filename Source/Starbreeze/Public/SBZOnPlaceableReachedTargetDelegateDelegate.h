#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZOnPlaceableReachedTargetDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlaceableReachedTargetDelegate, const FHitResult&, HitResult);

