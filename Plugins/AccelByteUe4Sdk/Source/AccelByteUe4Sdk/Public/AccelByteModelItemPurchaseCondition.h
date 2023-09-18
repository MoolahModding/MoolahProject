#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelItemConditionGroup.h"
#include "AccelByteModelItemPurchaseCondition.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelItemPurchaseCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelItemConditionGroup> ConditionGroups;
    
    FAccelByteModelItemPurchaseCondition();
};

