#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZOnCompletedAchievementRequestDoneDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCompletedAchievementRequestDoneDelegate, const FSBZChallengeData&, ChallengeData);

