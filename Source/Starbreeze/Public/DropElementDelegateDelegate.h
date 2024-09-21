#pragma once
#include "CoreMinimal.h"
#include "DropElementDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDropElementDelegate, UObject*, DroppedElement);

