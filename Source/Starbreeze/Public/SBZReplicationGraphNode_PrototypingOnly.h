#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "SBZReplicationGraphNode_PrototypingOnly.generated.h"

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_PrototypingOnly : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    USBZReplicationGraphNode_PrototypingOnly();

};

