#pragma once
#include "CoreMinimal.h"
#include "SBZAgentStateVariables.h"
#include "SBZAgentStateBase.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentStateBase : public FSBZAgentStateVariables {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Id;
    
public:
    STARBREEZE_API FSBZAgentStateBase();
};

