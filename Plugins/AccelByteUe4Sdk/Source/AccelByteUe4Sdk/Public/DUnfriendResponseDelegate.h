#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnfriendResponse.h"
#include "DUnfriendResponseDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDUnfriendResponse, FAccelByteModelsUnfriendResponse, Response);

