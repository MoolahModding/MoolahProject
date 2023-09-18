#pragma once
#include "CoreMinimal.h"
#include "SBZAIConfigDPSData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIConfigDPSData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    STARBREEZE_API FSBZAIConfigDPSData();
};

