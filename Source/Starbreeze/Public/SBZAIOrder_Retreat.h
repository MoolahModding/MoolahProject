#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_Retreat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Retreat : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
    USBZAIOrder_Retreat();

};

