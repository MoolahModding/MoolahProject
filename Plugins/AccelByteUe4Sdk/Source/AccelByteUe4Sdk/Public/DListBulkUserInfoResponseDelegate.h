#pragma once
#include "CoreMinimal.h"
#include "ListBulkUserInfo.h"
#include "DListBulkUserInfoResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDListBulkUserInfoResponse, FListBulkUserInfo, Response);

