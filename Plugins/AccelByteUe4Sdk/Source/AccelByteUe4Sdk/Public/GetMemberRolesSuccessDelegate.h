#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetMemberRolesListResponse.h"
#include "GetMemberRolesSuccessDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGetMemberRolesSuccess, const FAccelByteModelsGetMemberRolesListResponse&, Response);

