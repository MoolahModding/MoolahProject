#pragma once
#include "CoreMinimal.h"
#include "SBZFetchStatItemsValueQuery.h"
#include "SBZFetchStatItemsValueQueryArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZFetchStatItemsValueQueryArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZFetchStatItemsValueQuery> Data;
    
    STARBREEZE_API FSBZFetchStatItemsValueQueryArray();
};

