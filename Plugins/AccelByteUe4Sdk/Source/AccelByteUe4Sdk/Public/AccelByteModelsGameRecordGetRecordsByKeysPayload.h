#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayerRecordGetRecordsPayload.h"
#include "AccelByteModelsGameRecordGetRecordsByKeysPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGameRecordGetRecordsByKeysPayload : public FAccelByteModelsPlayerRecordGetRecordsPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsGameRecordGetRecordsByKeysPayload();
};

