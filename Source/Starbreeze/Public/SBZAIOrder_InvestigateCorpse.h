#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder_LifeAction.h"
#include "SBZAIOrder_InvestigateCorpse.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_InvestigateCorpse : public USBZAIOrder_LifeAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIOrder_InvestigateCorpse();

};

