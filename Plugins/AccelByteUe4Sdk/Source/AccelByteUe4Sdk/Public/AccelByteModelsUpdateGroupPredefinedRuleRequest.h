#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRuleInformation.h"
#include "AccelByteModelsUpdateGroupPredefinedRuleRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdateGroupPredefinedRuleRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsRuleInformation> RuleDetail;
    
    FAccelByteModelsUpdateGroupPredefinedRuleRequest();
};

