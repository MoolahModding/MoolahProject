#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBanGroupChatRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBanGroupChatRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FAccelByteModelsBanGroupChatRequest();
};

