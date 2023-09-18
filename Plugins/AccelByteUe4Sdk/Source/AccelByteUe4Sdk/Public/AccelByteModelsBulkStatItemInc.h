#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkStatItemInc.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkStatItemInc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString statCode;
    
    FAccelByteModelsBulkStatItemInc();
};

