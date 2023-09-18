#pragma once
#include "CoreMinimal.h"
#include "PartyJoinRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyJoinRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString invitationToken;
    
    ACCELBYTEUE4SDK_API FPartyJoinRequest();
};

