#pragma once
#include "CoreMinimal.h"
#include "SBZECMCountData.generated.h"

USTRUCT(BlueprintType)
struct FSBZECMCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentECMJammerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAddedECMTime;
    
    STARBREEZE_API FSBZECMCountData();
};

