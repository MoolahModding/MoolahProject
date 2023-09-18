#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficLightPool.generated.h"

class ASBZTrafficVolume;
class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FSBZTrafficLightPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZTrafficVolume*> BlockerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> MeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchToGreenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchToRedTimer;
    
    STARBREEZE_API FSBZTrafficLightPool();
};

