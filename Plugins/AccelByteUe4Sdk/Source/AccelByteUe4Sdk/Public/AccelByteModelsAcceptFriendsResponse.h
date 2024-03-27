#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsAcceptFriendsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAcceptFriendsResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendId;
    
    FAccelByteModelsAcceptFriendsResponse();
};

