#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsRequestFriendsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRequestFriendsResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendId;
    
    FAccelByteModelsRequestFriendsResponse();
};

