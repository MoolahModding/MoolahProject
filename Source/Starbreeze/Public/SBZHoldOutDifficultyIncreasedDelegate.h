#pragma once
#include "CoreMinimal.h"
#include "ESBZHoldOutModeDifficulty.h"
#include "SBZHoldOutDifficultyIncreasedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZHoldOutDifficultyIncreased, ESBZHoldOutModeDifficulty, NewDifficulty);

