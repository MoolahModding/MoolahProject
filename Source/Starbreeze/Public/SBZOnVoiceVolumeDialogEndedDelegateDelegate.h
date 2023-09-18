#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogEndedReason.h"
#include "SBZOnVoiceVolumeDialogEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnVoiceVolumeDialogEndedDelegate, ESBZDialogEndedReason, Reason);

