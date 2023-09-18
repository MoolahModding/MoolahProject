#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserPlatformInfo.h"
#include "accelByteUserPlatformInfoData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FaccelByteUserPlatformInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString avatarUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserPlatformInfo> platformInfos;
    
    FaccelByteUserPlatformInfoData();
};

