#pragma once
#include "CoreMinimal.h"
#include "EPD3DispatchCallerReason.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_InvestigateGate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_InvestigateGate : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3DispatchCallerReason CallReason;
    
public:
    USBZAIOrder_InvestigateGate();
};

