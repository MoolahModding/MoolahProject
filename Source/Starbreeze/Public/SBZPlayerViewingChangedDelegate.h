#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerViewingChangedDelegate.generated.h"

class ASBZSecurityCamera;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZPlayerViewingChanged, ASBZSecurityCamera*, Camera, bool, bIsViewTarget, bool, bIsLocalPlayer);

