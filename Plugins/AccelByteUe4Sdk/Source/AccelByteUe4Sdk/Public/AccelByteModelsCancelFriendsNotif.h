#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCancelFriendsNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsCancelFriendsNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsCancelFriendsNotif();
};

