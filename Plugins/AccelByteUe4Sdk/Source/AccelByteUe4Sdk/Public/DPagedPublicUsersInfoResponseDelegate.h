#pragma once
#include "CoreMinimal.h"
#include "PagedPublicUsersInfo.h"
#include "DPagedPublicUsersInfoResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPagedPublicUsersInfoResponse, FPagedPublicUsersInfo, Response);

