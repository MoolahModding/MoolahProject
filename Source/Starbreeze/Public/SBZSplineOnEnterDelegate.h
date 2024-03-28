#pragma once
#include "CoreMinimal.h"
#include "SBZSplineOnEnterDelegate.generated.h"

class AActor;
class ASBZSpline;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSplineOnEnter, ASBZSpline*, Spline, AActor*, Actor);

