#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZOnCompletedChallengeRequestDoneDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnCompletedChallengeRequestDoneDelegate, const FSBZChallengeData&, ChallengeData);

