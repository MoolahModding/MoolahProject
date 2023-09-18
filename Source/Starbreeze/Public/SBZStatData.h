#pragma once
#include "CoreMinimal.h"
#include "SBZStatData.generated.h"

USTRUCT(BlueprintType)
struct FSBZStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    STARBREEZE_API FSBZStatData();
};

