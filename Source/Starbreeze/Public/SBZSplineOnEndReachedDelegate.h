#pragma once
#include "CoreMinimal.h"
#include "SBZSplineOnEndReachedDelegate.generated.h"

class AActor;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSplineOnEndReached, ASBZSpline*, Spline, AActor*, Actor);

