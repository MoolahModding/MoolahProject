#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_SquadProtect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAIOrder_SquadProtect : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
    USBZAIOrder_SquadProtect();
};

