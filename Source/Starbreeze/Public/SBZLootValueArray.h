#pragma once
#include "CoreMinimal.h"
#include "SBZLootTypeData.h"
#include "SBZLootValueArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZLootValueArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLootTypeData> LootValueDifficultyArray;
    
    STARBREEZE_API FSBZLootValueArray();
};

