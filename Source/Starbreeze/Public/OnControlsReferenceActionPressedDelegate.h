#pragma once
#include "CoreMinimal.h"
#include "OnControlsReferenceActionPressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnControlsReferenceActionPressed, FName, ActionName);

