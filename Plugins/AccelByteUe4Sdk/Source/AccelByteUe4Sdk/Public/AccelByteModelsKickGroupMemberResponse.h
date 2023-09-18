#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsKickGroupMemberResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsKickGroupMemberResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KickedUserId;
    
    FAccelByteModelsKickGroupMemberResponse();
};

