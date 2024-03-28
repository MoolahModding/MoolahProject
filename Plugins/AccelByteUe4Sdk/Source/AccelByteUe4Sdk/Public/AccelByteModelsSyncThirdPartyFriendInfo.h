#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyFriendInfo.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyFriendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PsnEnv;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyFriendInfo();
};

