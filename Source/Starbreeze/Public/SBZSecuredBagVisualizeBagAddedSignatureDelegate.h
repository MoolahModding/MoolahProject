#pragma once
#include "CoreMinimal.h"
#include "SBZSecuredBagVisualizeBagAddedSignatureDelegate.generated.h"

class USBZBagType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSecuredBagVisualizeBagAddedSignature, const USBZBagType*, BagType);

