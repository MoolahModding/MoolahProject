#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelItemPredicate.h"
#include "AccelByteModelItemConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelItemConditionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelItemPredicate> Predicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Operator;
    
    FAccelByteModelItemConditionGroup();
};

