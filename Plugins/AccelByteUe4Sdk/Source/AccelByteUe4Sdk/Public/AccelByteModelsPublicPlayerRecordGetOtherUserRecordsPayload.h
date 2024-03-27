#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayerRecordGetRecordsPayload.h"
#include "AccelByteModelsPublicPlayerRecordGetOtherUserRecordsPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPublicPlayerRecordGetOtherUserRecordsPayload : public FAccelByteModelsPlayerRecordGetRecordsPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsPublicPlayerRecordGetOtherUserRecordsPayload();
};

