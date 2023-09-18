#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkFriendsRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkFriendsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FriendIds;
    
    FAccelByteModelsBulkFriendsRequest();
};

