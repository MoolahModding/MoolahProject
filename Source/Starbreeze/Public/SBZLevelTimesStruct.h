#pragma once
#include "CoreMinimal.h"
#include "SBZLevelTimesStruct.generated.h"

USTRUCT(BlueprintType)
struct FSBZLevelTimesStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoudTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthTime;
    
    STARBREEZE_API FSBZLevelTimesStruct();
};

