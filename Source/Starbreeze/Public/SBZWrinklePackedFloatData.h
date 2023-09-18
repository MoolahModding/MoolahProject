#pragma once
#include "CoreMinimal.h"
#include "SBZWrinklePackedFloatData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWrinklePackedFloatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PackedFloatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    STARBREEZE_API FSBZWrinklePackedFloatData();
};

