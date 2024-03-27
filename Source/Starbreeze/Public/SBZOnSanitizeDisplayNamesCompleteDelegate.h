#pragma once
#include "CoreMinimal.h"
#include "SBZOnSanitizeDisplayNamesCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnSanitizeDisplayNamesComplete, const TArray<FString>&, SanitizedDisplayNames);

