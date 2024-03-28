#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "UpdateGroupPredefinedRuleSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupPredefinedRuleSuccess, const FAccelByteModelsGroupInformation&, Response);

