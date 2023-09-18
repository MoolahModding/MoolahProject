#pragma once
#include "CoreMinimal.h"
#include "ContainerChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FContainerChanged, const TArray<UObject*>&, Array);

