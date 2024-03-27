#pragma once
#include "CoreMinimal.h"
#include "JwkSet.h"
#include "DJwkSetDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDJwkSetDelegate, FJwkSet, Response);

