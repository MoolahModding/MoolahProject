#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableOnUndroppedDelegate.generated.h"

class ASBZEquippable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZEquippableOnUndropped, const ASBZEquippable*, Equippable);

