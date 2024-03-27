#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "CreateGroupSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateGroupSuccess, const FAccelByteModelsGroupInformation&, Response);

