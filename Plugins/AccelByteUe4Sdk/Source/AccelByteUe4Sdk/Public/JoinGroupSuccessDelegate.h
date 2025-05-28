#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsJoinGroupResponse.h"
#include "JoinGroupSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FJoinGroupSuccess, const FAccelByteModelsJoinGroupResponse&, Response);

