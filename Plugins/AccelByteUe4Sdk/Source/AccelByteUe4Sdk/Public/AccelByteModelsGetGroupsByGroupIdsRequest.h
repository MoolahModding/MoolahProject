#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetGroupsByGroupIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetGroupsByGroupIdsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GroupIds;
    
    FAccelByteModelsGetGroupsByGroupIdsRequest();
};

