#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReadyConsentRequest.h"
#include "DSetReadyConsentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetReadyConsentResponse, FAccelByteModelsReadyConsentRequest, Response);

