#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.h"
#include "SBZBagCustomFilterDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSBZBagCustomFilter, FSBZBagHandle, BagHandle, bool&, Ret);

