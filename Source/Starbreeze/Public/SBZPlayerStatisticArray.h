#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatisticArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerStatisticArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerStatisticEntryArray;
    
    STARBREEZE_API FSBZPlayerStatisticArray();
};

