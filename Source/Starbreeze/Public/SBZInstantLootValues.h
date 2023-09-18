#pragma once
#include "CoreMinimal.h"
#include "SBZInstantLootValues.generated.h"

USTRUCT(BlueprintType)
struct FSBZInstantLootValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StealthMaxPayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LoudMaxPayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> NameToPointMap;
    
    STARBREEZE_API FSBZInstantLootValues();
};

