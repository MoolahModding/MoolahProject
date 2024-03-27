#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnmuteGroupChatRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUnmuteGroupChatRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FAccelByteModelsUnmuteGroupChatRequest();
};

