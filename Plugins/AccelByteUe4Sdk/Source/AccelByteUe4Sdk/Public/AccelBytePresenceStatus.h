#pragma once
#include "CoreMinimal.h"
#include "EAvailability.h"
#include "AccelBytePresenceStatus.generated.h"

USTRUCT(BlueprintType)
struct FAccelBytePresenceStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailability Availability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Activity;
    
    ACCELBYTEUE4SDK_API FAccelBytePresenceStatus();
};

