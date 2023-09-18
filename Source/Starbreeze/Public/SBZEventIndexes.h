#pragma once
#include "CoreMinimal.h"
#include "SBZEventIndexes.generated.h"

USTRUCT(BlueprintType)
struct FSBZEventIndexes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> IndexArray;
    
    STARBREEZE_API FSBZEventIndexes();
};

