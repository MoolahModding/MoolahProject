#pragma once
#include "CoreMinimal.h"
#include "EPD3DispatchCallerReason.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_InvestigateGate.generated.h"

class USBZActionNotificationAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_InvestigateGate : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3DispatchCallerReason CallReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* NotificationAsset;
    
public:
    USBZAIOrder_InvestigateGate();

};

