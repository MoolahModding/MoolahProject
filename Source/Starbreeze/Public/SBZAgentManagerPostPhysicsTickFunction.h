#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBZAgentManagerPostPhysicsTickFunction.generated.h"

class USBZAgentManager;

USTRUCT(BlueprintType)
struct FSBZAgentManagerPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAgentManager* Target;
    
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

