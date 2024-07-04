#pragma once
#include "CoreMinimal.h"
#include "SBZLootTypeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZLootTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValueForLootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfamyPointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInfamyPointsForLootType;
    
    STARBREEZE_API FSBZLootTypeData();
};

