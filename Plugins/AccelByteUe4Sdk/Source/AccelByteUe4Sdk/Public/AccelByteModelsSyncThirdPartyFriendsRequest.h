#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyFriendInfo.h"
#include "AccelByteModelsSyncThirdPartyFriendsRequest.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyFriendsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsSyncThirdPartyFriendInfo> FriendSyncDetails;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyFriendsRequest();
};

