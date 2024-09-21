#pragma once
#include "CoreMinimal.h"
#include "OnMapIconButtonClickedDelegate.generated.h"

class USBZMainMenuCrimeNetHeistMapIcon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapIconButtonClicked, USBZMainMenuCrimeNetHeistMapIcon*, MapIcon);

