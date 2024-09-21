#pragma once
#include "CoreMinimal.h"
#include "OnControlsReferenceActionPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnControlsReferenceActionPressed, FName, ActionName);

