#pragma once
#include "CoreMinimal.h"
#include "SBZPerformanceBonusEntry.generated.h"

USTRUCT(BlueprintType)
struct FSBZPerformanceBonusEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    STARBREEZE_API FSBZPerformanceBonusEntry();
};

