#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_TacticalMovePosition.generated.h"

class AActor;
class ASBZAIController;
class ASBZRoomVolume;

UCLASS(Blueprintable)
class USBZBTTask_TacticalMovePosition : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveToBBKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNavProjection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationProjectionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* TargetRoom;
    
public:
    USBZBTTask_TacticalMovePosition();

};

