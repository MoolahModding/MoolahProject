#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "PlatformLink.h"
#include "PagedPlatformLinks.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPagedPlatformLinks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformLink> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FPagedPlatformLinks();
};

