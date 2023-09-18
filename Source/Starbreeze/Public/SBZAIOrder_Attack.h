#pragma once
#include "CoreMinimal.h"
#include "EPD3DefeatState.h"
#include "SBZAIOrder_TacticalMoveTo.h"
#include "SBZAIOrder_Attack.generated.h"

class APawn;
class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Attack : public USBZAIOrder_TacticalMoveTo {
    GENERATED_BODY()
public:
    USBZAIOrder_Attack();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(APawn* KilledPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDefeatStateChanged(ASBZPlayerState* InSBZPlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState InDefeatState);
    
};

