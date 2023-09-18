#pragma once
#include "CoreMinimal.h"
#include "GetPartyDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetPartyDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyId;
    
    ACCELBYTEUE4SDK_API FGetPartyDataRequest();
};

