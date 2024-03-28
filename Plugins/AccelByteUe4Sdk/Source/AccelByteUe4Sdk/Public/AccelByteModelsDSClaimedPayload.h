#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSRegisteredPayload.h"
#include "AccelByteModelsDSClaimedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSClaimedPayload : public FAccelByteModelsDSRegisteredPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    FAccelByteModelsDSClaimedPayload();
};

