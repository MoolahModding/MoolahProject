#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRejectConsentRequest.h"
#include "DSetRejectConsentResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetRejectConsentResponse, FAccelByteModelsRejectConsentRequest, Response);

