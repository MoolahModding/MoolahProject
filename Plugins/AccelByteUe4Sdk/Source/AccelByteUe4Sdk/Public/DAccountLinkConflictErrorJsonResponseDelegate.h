#pragma once
#include "CoreMinimal.h"
#include "AccountLinkConflictErrorJson.h"
#include "DAccountLinkConflictErrorJsonResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDAccountLinkConflictErrorJsonResponse, int32, ErrorCode, const FString&, ErrorMessage, FAccountLinkConflictErrorJson, Response);

