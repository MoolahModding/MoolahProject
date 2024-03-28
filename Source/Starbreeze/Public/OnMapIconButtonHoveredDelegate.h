#pragma once
#include "CoreMinimal.h"
#include "OnMapIconButtonHoveredDelegate.generated.h"

class USBZMainMenuCrimeNetHeistMapIcon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMapIconButtonHovered, USBZMainMenuCrimeNetHeistMapIcon*, MapIcon, bool, bIsHovered);

