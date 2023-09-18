#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerState.h"
#include "SBZReplayPlayerState.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZReplayPlayerState : public ASBZPlayerState {
    GENERATED_BODY()
public:
    ASBZReplayPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
    {
        return AbilitySystem;
    }
};

