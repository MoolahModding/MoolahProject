#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "SBZAIRepositionType.generated.h"

class USBZAIRepositionPredicate;

USTRUCT(BlueprintType)
struct FSBZAIRepositionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIRepositionPredicate> Predicate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    STARBREEZE_API FSBZAIRepositionType();
};

