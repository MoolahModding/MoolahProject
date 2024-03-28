#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequestData.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsListIncomingFriendsWithTimeResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsListIncomingFriendsWithTimeResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsFriendRequestData> Data;
    
    FAccelByteModelsListIncomingFriendsWithTimeResponse();
};

