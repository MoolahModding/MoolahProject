#pragma once
#include "CoreMinimal.h"
#include "SBZOnOperatorSkillUsedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZOnOperatorSkillUsed, bool, bIsBase, bool, bIsMarkMania, bool, bIsWhoYouGonnaCall, bool, bIsRadioSilence);

