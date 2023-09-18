#pragma once
#include "CoreMinimal.h"
#include "SBZAgentStateBase.h"
#include "SBZAgentState.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentState : public FSBZAgentStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
public:
    STARBREEZE_API FSBZAgentState();
};

