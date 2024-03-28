#pragma once
#include "CoreMinimal.h"
#include "DErrorHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);

