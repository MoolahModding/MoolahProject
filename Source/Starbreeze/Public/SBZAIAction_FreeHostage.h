#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction_Order.h"
#include "SBZAIAction_FreeHostage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_FreeHostage : public USBZAIAction_Order {
    GENERATED_BODY()
public:
    USBZAIAction_FreeHostage();
};

