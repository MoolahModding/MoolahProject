#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMemberRequestResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsGetMemberRequestsListResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetMemberRequestsListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMemberRequestResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsGetMemberRequestsListResponse();
};

