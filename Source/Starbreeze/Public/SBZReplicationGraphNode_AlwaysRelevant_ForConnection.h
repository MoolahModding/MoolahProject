#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "SBZReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastPawn;
    
public:
    USBZReplicationGraphNode_AlwaysRelevant_ForConnection();

};

