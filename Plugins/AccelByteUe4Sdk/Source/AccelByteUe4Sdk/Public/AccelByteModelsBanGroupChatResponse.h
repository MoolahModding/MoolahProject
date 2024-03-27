#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBanGroupChatResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBanGroupChatResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FAccelByteModelsBanGroupChatResponse();
};

