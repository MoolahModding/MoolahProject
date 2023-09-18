#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SBZBTTask_GetNextPatrolPoint.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_GetNextPatrolPoint : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
public:
    USBZBTTask_GetNextPatrolPoint();

};

