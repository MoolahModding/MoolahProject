#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayerRecordGetRecordsPayload.h"
#include "AccelByteModelsGameBinaryRecordGetRecordsByKeysPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGameBinaryRecordGetRecordsByKeysPayload : public FAccelByteModelsPlayerRecordGetRecordsPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsGameBinaryRecordGetRecordsByKeysPayload();
};

