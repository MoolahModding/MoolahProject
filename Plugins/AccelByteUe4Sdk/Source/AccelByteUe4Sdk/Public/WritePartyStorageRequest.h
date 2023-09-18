#pragma once
#include "CoreMinimal.h"
#include "WritePartyStorageRequest.generated.h"

USTRUCT(BlueprintType)
struct FWritePartyStorageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryAttempt;
    
    ACCELBYTEUE4SDK_API FWritePartyStorageRequest();
};

