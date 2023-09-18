#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnblockPlayerNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsUnblockPlayerNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnblockedUserId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsUnblockPlayerNotif();
};

