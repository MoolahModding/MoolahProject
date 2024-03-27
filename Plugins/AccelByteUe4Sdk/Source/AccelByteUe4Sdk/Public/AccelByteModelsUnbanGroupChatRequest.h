#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnbanGroupChatRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUnbanGroupChatRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FAccelByteModelsUnbanGroupChatRequest();
};

