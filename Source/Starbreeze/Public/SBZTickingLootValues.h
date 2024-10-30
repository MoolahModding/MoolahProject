#pragma once
#include "CoreMinimal.h"
#include "SBZTickingLootValues.generated.h"

USTRUCT(BlueprintType)
struct FSBZTickingLootValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StealthMaxPayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LoudMaxPayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StealthMaxInfamyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LoudMaxInfamyArray;
    
    STARBREEZE_API FSBZTickingLootValues();
};

