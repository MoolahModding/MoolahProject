#pragma once
#include "CoreMinimal.h"
#include "SBZForbidHurtNotifyState.h"
#include "SBZForbidDeathNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZForbidDeathNotifyState : public USBZForbidHurtNotifyState {
    GENERATED_BODY()
public:
    USBZForbidDeathNotifyState();
};

