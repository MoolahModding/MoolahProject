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
    
    STARBREEZE_API FSBZLootTypeData();
};

