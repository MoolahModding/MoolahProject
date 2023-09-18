#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "PublicUserInfo.h"
#include "PagedPublicUsersInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPagedPublicUsersInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPublicUserInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FPagedPublicUsersInfo();
};

