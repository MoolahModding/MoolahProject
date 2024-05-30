#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "SBZReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    USBZReplicationGraphNode_PlayerStateFrequencyLimiter();

};

