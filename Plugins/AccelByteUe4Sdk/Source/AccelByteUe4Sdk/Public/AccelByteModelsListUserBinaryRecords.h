#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserBinaryRecord.h"
#include "AccelByteModelsListUserBinaryRecords.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsListUserBinaryRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserBinaryRecord> Data;
    
    FAccelByteModelsListUserBinaryRecords();
};

