#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleReplicatedMovement.h"
#include "SBZDebugSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FSBZDebugSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleReplicatedMovement ServerState;
    
    STARBREEZE_API FSBZDebugSnapshot();
};

