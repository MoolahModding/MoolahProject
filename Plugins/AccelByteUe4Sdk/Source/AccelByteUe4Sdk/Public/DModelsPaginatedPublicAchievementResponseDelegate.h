#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaginatedPublicAchievement.h"
#include "DModelsPaginatedPublicAchievementResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsPaginatedPublicAchievementResponse, FAccelByteModelsPaginatedPublicAchievement, Response);

