#pragma once
#include "CoreMinimal.h"
#include "SBZHackableProgressData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHackableProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequency;
    
    STARBREEZE_API FSBZHackableProgressData();
};

