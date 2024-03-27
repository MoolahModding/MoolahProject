#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "GetGroupSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGroupSuccess, const FAccelByteModelsGroupInformation&, Response);

