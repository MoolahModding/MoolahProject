#pragma once
#include "CoreMinimal.h"
#include "PartyRejectRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyRejectRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString invitationToken;
    
    ACCELBYTEUE4SDK_API FPartyRejectRequest();
};

