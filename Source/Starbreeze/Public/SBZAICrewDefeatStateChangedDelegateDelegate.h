#pragma once
#include "CoreMinimal.h"
#include "SBZAICrewDefeatStateChangedData.h"
#include "SBZAICrewDefeatStateChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZAICrewDefeatStateChangedDelegate, const FSBZAICrewDefeatStateChangedData&, InData);

