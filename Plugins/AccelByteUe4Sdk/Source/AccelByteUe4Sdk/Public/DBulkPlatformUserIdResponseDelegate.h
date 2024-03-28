#pragma once
#include "CoreMinimal.h"
#include "BulkPlatformUserIdResponse.h"
#include "DBulkPlatformUserIdResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDBulkPlatformUserIdResponse, FBulkPlatformUserIdResponse, Response);

