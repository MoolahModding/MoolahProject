#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQuerySystemMessagesResponseItem.h"
#include "AccelByteModelsQuerySystemMessagesResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsQuerySystemMessagesResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsQuerySystemMessagesResponseItem> Data;
    
    FAccelByteModelsQuerySystemMessagesResponse();
};

