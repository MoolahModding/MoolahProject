#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "UserOtherPlatformInfo.h"
#include "PagedUserOtherPlatformInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPagedUserOtherPlatformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserOtherPlatformInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalData;
    
    FPagedUserOtherPlatformInfo();
};

