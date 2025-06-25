#pragma once
#include "CoreMinimal.h"
#include "SBZInternalStatData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    STARBREEZE_API FSBZInternalStatData();
};

