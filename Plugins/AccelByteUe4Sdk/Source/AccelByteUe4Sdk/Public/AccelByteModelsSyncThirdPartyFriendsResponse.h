#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyFriendsResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyFriendsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyFriendsResponse();
};

