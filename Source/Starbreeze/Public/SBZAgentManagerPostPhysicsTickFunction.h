#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBZAgentManagerPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentManagerPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZAgentManagerPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBZAgentManagerPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSBZAgentManagerPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

