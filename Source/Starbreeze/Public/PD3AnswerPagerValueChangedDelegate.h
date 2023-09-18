#pragma once
#include "CoreMinimal.h"
#include "PD3AnswerPagerValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPD3AnswerPagerValueChanged, int32, AnswerValue, int32, MaxPagerAnswerValue);

