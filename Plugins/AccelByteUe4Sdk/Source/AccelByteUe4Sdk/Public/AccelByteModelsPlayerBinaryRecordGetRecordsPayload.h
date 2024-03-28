#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayerRecordGetRecordsPayload.h"
#include "AccelByteModelsPlayerBinaryRecordGetRecordsPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlayerBinaryRecordGetRecordsPayload : public FAccelByteModelsPlayerRecordGetRecordsPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsPlayerBinaryRecordGetRecordsPayload();
};

