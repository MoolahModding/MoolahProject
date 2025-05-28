#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedLeaderboardData.h"
#include "DModelsPaginatedLeaderboardDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedLeaderboardData, FAccelByteModelsPaginatedLeaderboardData, Response);

