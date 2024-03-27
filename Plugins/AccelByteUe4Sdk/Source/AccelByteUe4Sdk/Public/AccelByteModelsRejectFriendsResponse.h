#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsRejectFriendsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRejectFriendsResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendId;
    
    FAccelByteModelsRejectFriendsResponse();
};

