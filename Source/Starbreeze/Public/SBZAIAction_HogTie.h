#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction.h"
#include "SBZAIAction_HogTie.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_HogTie : public USBZAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceGoDownOnGround;
    
    USBZAIAction_HogTie();

};

