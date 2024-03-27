#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "DPayloadModifierDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPayloadModifier, FJsonObjectWrapper, Payload);

