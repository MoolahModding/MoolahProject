#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptFriendsNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsAcceptFriendsNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsAcceptFriendsNotif();
};

