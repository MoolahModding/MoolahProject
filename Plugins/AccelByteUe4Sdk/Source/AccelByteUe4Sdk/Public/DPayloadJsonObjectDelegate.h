#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "DPayloadJsonObjectDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FJsonObjectWrapper, FDPayloadJsonObject, FJsonObjectWrapper, Response);

