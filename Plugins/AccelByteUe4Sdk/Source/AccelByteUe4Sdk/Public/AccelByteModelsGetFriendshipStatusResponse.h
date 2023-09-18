#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "ERelationshipStatusCode.h"
#include "AccelByteModelsGetFriendshipStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetFriendshipStatusResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERelationshipStatusCode friendshipStatus;
    
    FAccelByteModelsGetFriendshipStatusResponse();
};

