#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGroupInformation.h"
#include "CreateGroupSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateGroupSuccess, const FAccelByteModelsGroupInformation&, Response);

