#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableOnMeshPropetiesUpdatedDelegate.generated.h"

class UMeshComponent;
class USBZOutlineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZEquippableOnMeshPropetiesUpdated, const UMeshComponent*, Reference, USBZOutlineComponent*, OutlineComponent, bool, bIsReset);

