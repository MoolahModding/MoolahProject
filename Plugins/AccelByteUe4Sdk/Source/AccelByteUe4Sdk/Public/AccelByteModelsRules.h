#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRuleInformation.h"
#include "EAccelByteAllowedAction.h"
#include "AccelByteModelsRules.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteAllowedAction AllowedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsRuleInformation> RuleDetail;
    
    FAccelByteModelsRules();
};

