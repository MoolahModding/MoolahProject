#pragma once
#include "CoreMinimal.h"
#include "SBZReplicatedGasVolumeComponentData.generated.h"

USTRUCT(BlueprintType)
struct FSBZReplicatedGasVolumeComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExpansionScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    STARBREEZE_API FSBZReplicatedGasVolumeComponentData();
};

