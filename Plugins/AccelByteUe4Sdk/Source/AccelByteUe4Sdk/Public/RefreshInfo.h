#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RefreshInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FRefreshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RefreshToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Expiration;
    
    FRefreshInfo();
};

