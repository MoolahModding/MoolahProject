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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWheeledVehicleReplicatedMovement ClientState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerWorldTimeSeconds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FrameCounter;
    
    STARBREEZE_API FSBZDebugSnapshot();
};

