#pragma once
#include "CoreMinimal.h"
#include "GetPartyStorageRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetPartyStorageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyId;
    
    ACCELBYTEUE4SDK_API FGetPartyStorageRequest();
};

