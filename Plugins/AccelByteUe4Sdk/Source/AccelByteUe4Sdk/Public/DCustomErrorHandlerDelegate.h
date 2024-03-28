#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "DCustomErrorHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDCustomErrorHandler, int32, ErrorCode, const FString&, ErrorMessage, const FJsonObjectWrapper&, ErrorObject);

