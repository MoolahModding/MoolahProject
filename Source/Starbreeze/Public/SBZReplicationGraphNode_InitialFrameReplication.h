#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "SBZReplicationGraphNode_InitialFrameReplication.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_InitialFrameReplication : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    USBZReplicationGraphNode_InitialFrameReplication();

};

