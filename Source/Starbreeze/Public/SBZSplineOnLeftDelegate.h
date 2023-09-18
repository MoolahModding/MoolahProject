#pragma once
#include "CoreMinimal.h"
#include "SBZSplineOnLeftDelegate.generated.h"

class AActor;
class ASBZSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSplineOnLeft, ASBZSpline*, Spline, AActor*, Actor);

