#pragma once
#include "CoreMinimal.h"
#include "PartyInviteRequest.generated.h"

USTRUCT(BlueprintType)
struct FPartyInviteRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendID;
    
    ACCELBYTEUE4SDK_API FPartyInviteRequest();
};

