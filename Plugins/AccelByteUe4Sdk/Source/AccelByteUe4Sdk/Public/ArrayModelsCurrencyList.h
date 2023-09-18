#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCurrencyList.h"
#include "ArrayModelsCurrencyList.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsCurrencyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCurrencyList> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsCurrencyList();
};

