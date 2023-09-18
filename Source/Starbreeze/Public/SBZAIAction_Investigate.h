#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction.h"
#include "SBZAIAction_Investigate.generated.h"

class USBZActionNotificationAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_Investigate : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendOnlyOneInvestigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUrgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActionNotificationAsset* EscalationReason;
    
public:
    USBZAIAction_Investigate();

};

