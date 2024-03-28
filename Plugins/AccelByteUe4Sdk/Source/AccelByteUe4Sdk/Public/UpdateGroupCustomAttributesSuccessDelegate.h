#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "UpdateGroupCustomAttributesSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGroupCustomAttributesSuccess, const FAccelByteModelsGroupInformation&, Response);

