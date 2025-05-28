#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedUserAchievement.h"
#include "DModelsPaginatedUserAchievementResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedUserAchievementResponse, FAccelByteModelsPaginatedUserAchievement, Response);

