#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameBinaryRecord.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedGameBinaryRecords.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedGameBinaryRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGameBinaryRecord> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedGameBinaryRecords();
};

