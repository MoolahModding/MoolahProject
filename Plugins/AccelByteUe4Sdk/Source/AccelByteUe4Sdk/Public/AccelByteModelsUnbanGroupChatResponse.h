#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnbanGroupChatResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUnbanGroupChatResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FAccelByteModelsUnbanGroupChatResponse();
};

