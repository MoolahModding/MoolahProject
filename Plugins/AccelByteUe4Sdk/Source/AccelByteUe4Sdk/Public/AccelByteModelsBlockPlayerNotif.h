#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBlockPlayerNotif.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsBlockPlayerNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlockedUserId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsBlockPlayerNotif();
};

