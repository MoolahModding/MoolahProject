#pragma once
#include "CoreMinimal.h"
#include "SBZPerformanceBonusEntry.h"
#include "SBZPerformanceBonusArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZPerformanceBonusArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPerformanceBonusEntry> PerformanceBonusEntryArray;
    
    STARBREEZE_API FSBZPerformanceBonusArray();
};

