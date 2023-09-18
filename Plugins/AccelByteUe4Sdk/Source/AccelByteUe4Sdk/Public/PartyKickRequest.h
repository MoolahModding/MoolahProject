#pragma once
#include "CoreMinimal.h"
#include "PartyKickRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyKickRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString memberID;
    
    ACCELBYTEUE4SDK_API FPartyKickRequest();
};

