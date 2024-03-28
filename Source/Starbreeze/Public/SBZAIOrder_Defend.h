#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_Defend.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIOrder_Defend : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
    USBZAIOrder_Defend();
};

