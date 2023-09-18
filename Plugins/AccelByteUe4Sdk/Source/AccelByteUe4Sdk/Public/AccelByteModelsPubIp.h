#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPubIp.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPubIp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ip;
    
    FAccelByteModelsPubIp();
};

