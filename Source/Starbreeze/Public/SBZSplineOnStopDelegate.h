#pragma once
#include "CoreMinimal.h"
#include "SBZSplineOnStopDelegate.generated.h"

class AActor;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZSplineOnStop, ASBZSpline*, Spline, AActor*, Actor, float, Distance);

