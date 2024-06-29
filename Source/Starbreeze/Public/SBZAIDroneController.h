#pragma once
#include "CoreMinimal.h"
#include "SBZAIArmedPawnController.h"
#include "SBZAccelerationBasedAngle.h"
#include "SBZAIDroneController.generated.h"

class UBehaviorTree;
class UBlackboardData;

UCLASS(Blueprintable)
class ASBZAIDroneController : public ASBZAIArmedPawnController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DespawnBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAccelerationBasedAngle YawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAccelerationBasedAngle PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FailedTasksUntilDespawn;
    
public:
    ASBZAIDroneController(const FObjectInitializer& ObjectInitializer);

};

