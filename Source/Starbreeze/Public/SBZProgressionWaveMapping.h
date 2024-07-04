#pragma once
#include "CoreMinimal.h"
#include "SBZProgressionWaveMapping.generated.h"

USTRUCT(BlueprintType)
struct FSBZProgressionWaveMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveIndex;
    
    STARBREEZE_API FSBZProgressionWaveMapping();
};

