#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZAIAction.h"
#include "SBZAIAction_SecurityRoom.generated.h"

class ASBZAIController;
class ASBZGate;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_SecurityRoom : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZGate*> Gates;
    
public:
    USBZAIAction_SecurityRoom();

private:
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ClearDelegates();
    
};

