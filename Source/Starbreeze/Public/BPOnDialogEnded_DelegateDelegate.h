#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogEndedReason.h"
#include "BPOnDialogEnded_DelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FBPOnDialogEnded_Delegate, ESBZDialogEndedReason, Reason);

