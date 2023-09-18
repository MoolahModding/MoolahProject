#pragma once
#include "CoreMinimal.h"
#include "ESBZComparisonType.h"
#include "SBZFloatLimit.generated.h"

USTRUCT(BlueprintType)
struct FSBZFloatLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZComparisonType Type;
    
    STARBREEZE_API FSBZFloatLimit();
};

