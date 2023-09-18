#pragma once
#include "CoreMinimal.h"
#include "SBZLaserPattern.generated.h"

USTRUCT(BlueprintType)
struct FSBZLaserPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LaserIndexes;
    
    STARBREEZE_API FSBZLaserPattern();
};

