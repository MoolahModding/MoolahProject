#pragma once
#include "CoreMinimal.h"
#include "PD3AssaulSustainPhaseSettings.generated.h"

USTRUCT(BlueprintType)
struct FPD3AssaulSustainPhaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SustainPhaseDuration;
    
    STARBREEZE_API FPD3AssaulSustainPhaseSettings();
};

