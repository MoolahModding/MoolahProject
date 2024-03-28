#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedLeaderboardData.h"
#include "DModelsPaginatedLeaderboardDataDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedLeaderboardData, FAccelByteModelsPaginatedLeaderboardData, Response);

