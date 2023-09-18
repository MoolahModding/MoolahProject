#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRequestFriendsNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsRequestFriendsNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsRequestFriendsNotif();
};

