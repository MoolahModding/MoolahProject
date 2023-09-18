#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnfriendNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsUnfriendNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsUnfriendNotif();
};

