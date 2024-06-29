#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SBZAIAction.h"
#include "SBZAIAction_SetBBValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_SetBBValue : public USBZAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIAction_SetBBValue();

};

