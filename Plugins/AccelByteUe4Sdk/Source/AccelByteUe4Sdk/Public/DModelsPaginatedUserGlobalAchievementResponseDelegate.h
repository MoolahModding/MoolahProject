#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedUserGlobalAchievement.h"
#include "DModelsPaginatedUserGlobalAchievementResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedUserGlobalAchievementResponse, FAccelByteModelsPaginatedUserGlobalAchievement, Response);

