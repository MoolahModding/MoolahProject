#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLimitOffsetRequest.h"
#include "AccelByteModelsGetGroupListRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetGroupListRequest : public FAccelByteModelsLimitOffsetRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupRegion;
    
    FAccelByteModelsGetGroupListRequest();
};

