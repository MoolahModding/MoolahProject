#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "PublicUserOtherPlatformInfo.h"
#include "PublicPagedUserOtherPlatformInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPublicPagedUserOtherPlatformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPublicUserOtherPlatformInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FPublicPagedUserOtherPlatformInfo();
};

