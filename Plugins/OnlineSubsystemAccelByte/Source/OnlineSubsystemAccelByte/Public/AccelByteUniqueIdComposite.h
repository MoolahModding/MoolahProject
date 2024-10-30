#pragma once
#include "CoreMinimal.h"
#include "AccelByteUniqueIdComposite.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMACCELBYTE_API FAccelByteUniqueIdComposite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    FAccelByteUniqueIdComposite();
};

