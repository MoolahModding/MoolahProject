#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateHostMigration.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateHostMigration : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateHostMigration();
};

