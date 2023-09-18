#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkGetRecordsByKeysRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkGetRecordsByKeysRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Keys;
    
    FAccelByteModelsBulkGetRecordsByKeysRequest();
};

