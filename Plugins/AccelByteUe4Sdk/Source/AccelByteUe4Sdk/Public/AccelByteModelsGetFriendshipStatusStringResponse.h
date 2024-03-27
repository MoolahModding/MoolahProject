#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsGetFriendshipStatusStringResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsGetFriendshipStatusStringResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendshipStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsGetFriendshipStatusStringResponse();
};

