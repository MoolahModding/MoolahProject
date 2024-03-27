#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsCancelFriendsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsCancelFriendsResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendId;
    
    FAccelByteModelsCancelFriendsResponse();
};

