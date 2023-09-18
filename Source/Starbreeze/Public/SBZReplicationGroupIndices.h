#pragma once
#include "CoreMinimal.h"
#include "SBZReplicationGroupIndices.generated.h"

USTRUCT(BlueprintType)
struct FSBZReplicationGroupIndices {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ReplicationGroupIndices;
    
public:
    STARBREEZE_API FSBZReplicationGroupIndices();
};

