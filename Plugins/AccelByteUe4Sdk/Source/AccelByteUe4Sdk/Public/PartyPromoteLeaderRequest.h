#pragma once
#include "CoreMinimal.h"
#include "PartyPromoteLeaderRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyPromoteLeaderRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userId;
    
    ACCELBYTEUE4SDK_API FPartyPromoteLeaderRequest();
};

