#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLoadFriendWithPlatformData.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsLoadFriendListWithPlatformResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLoadFriendListWithPlatformResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsLoadFriendWithPlatformData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsLoadFriendListWithPlatformResponse();
};

