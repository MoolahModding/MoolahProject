#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SBZBTService_DisperseCrowd.generated.h"

UCLASS(Blueprintable)
class USBZBTService_DisperseCrowd : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxCrowdSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
public:
    USBZBTService_DisperseCrowd();

};

