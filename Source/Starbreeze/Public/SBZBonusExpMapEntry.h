#pragma once
#include "CoreMinimal.h"
#include "SBZBonusExpMapEntry.generated.h"

USTRUCT(BlueprintType)
struct FSBZBonusExpMapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PerformanceObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GainedExp;
    
    STARBREEZE_API FSBZBonusExpMapEntry();
};

