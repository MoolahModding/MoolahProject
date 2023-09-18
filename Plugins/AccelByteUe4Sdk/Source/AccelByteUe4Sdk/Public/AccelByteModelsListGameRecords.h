#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameRecord.h"
#include "AccelByteModelsListGameRecords.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsListGameRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGameRecord> Data;
    
    FAccelByteModelsListGameRecords();
};

