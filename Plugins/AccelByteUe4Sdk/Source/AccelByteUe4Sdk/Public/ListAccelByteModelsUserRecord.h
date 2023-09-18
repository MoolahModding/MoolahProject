#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRecord.h"
#include "ListAccelByteModelsUserRecord.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FListAccelByteModelsUserRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserRecord> Data;
    
    FListAccelByteModelsUserRecord();
};

