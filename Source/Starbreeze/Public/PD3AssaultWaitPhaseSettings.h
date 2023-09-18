#pragma once
#include "CoreMinimal.h"
#include "PD3AssaultWaitPhaseSettings.generated.h"

USTRUCT(BlueprintType)
struct FPD3AssaultWaitPhaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitPhaseDuration;
    
    STARBREEZE_API FPD3AssaultWaitPhaseSettings();
};

