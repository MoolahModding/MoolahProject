#pragma once
#include "CoreMinimal.h"
#include "SBZOnPowerUpPickedUpDelegate.generated.h"

class ASBZPowerUp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPowerUpPickedUp, ASBZPowerUp*, PowerUp);

