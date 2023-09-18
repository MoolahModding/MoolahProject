#pragma once
#include "CoreMinimal.h"
#include "PartyJoinViaCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyJoinViaCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyCode;
    
    ACCELBYTEUE4SDK_API FPartyJoinViaCodeRequest();
};

