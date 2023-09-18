#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "UpdateGroupCustomRuleSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupCustomRuleSuccess, const FAccelByteModelsGroupInformation&, Response);

