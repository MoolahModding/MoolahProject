#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_InvestigateSeenPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_InvestigateSeenPlayer : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeOnArrival;
    
public:
    USBZAIOrder_InvestigateSeenPlayer();

};

