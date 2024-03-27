#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSRegisteredPayload.h"
#include "AccelByteModelsDSGameClientJoinedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSGameClientJoinedPayload : public FAccelByteModelsDSRegisteredPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FAccelByteModelsDSGameClientJoinedPayload();
};

