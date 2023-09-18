#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "BanUserResponse.h"
#include "GetUserBansResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FGetUserBansResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBanUserResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FGetUserBansResponse();
};

