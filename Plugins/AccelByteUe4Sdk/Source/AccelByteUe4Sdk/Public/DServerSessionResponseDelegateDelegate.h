#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerSessionResponse.h"
#include "DServerSessionResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDServerSessionResponseDelegate, FAccelByteModelsServerSessionResponse, Response);

