#pragma once
#include "CoreMinimal.h"
#include "SBZVariationDataIndexTracker.h"
#include "SBZVariationSeedGenerator.generated.h"

USTRUCT(BlueprintType)
struct FSBZVariationSeedGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZVariationDataIndexTracker> VariationDataIndexTrackers;
    
public:
    STARBREEZE_API FSBZVariationSeedGenerator();
};

