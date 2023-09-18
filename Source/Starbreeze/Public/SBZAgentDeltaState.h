#pragma once
#include "CoreMinimal.h"
#include "SBZAgentStateBase.h"
#include "SBZAgentDeltaState.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentDeltaState : public FSBZAgentStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SourceFrameId;
    
public:
    STARBREEZE_API FSBZAgentDeltaState();
};

