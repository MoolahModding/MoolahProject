#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkStatItemCreate.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkStatItemCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatCode;
    
    FAccelByteModelsBulkStatItemCreate();
};

