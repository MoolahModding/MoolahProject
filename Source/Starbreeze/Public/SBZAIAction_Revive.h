#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction_Order.h"
#include "SBZAIAction_Revive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_Revive : public USBZAIAction_Order {
    GENERATED_BODY()
public:
    USBZAIAction_Revive();
};

