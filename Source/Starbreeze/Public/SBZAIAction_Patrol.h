#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction_Order.h"
#include "SBZAIAction_Patrol.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_Patrol : public USBZAIAction_Order {
    GENERATED_BODY()
public:
    USBZAIAction_Patrol();
};

