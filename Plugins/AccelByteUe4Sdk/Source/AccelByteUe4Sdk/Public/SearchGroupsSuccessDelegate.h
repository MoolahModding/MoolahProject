#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetGroupListResponse.h"
#include "SearchGroupsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSearchGroupsSuccess, const FAccelByteModelsGetGroupListResponse&, Response);

