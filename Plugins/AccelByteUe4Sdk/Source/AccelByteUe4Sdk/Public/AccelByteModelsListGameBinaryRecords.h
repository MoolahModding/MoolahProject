#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameBinaryRecord.h"
#include "AccelByteModelsListGameBinaryRecords.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsListGameBinaryRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGameBinaryRecord> Data;
    
    FAccelByteModelsListGameBinaryRecords();
};

