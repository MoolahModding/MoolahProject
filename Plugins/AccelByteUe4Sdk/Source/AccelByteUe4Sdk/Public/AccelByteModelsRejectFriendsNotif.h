#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRejectFriendsNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsRejectFriendsNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsRejectFriendsNotif();
};

