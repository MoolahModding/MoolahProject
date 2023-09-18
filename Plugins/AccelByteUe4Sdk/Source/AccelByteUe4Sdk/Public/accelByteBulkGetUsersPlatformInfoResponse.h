#pragma once
#include "CoreMinimal.h"
#include "accelByteUserPlatformInfoData.h"
#include "accelByteBulkGetUsersPlatformInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FaccelByteBulkGetUsersPlatformInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FaccelByteUserPlatformInfoData> Data;
    
    FaccelByteBulkGetUsersPlatformInfoResponse();
};

