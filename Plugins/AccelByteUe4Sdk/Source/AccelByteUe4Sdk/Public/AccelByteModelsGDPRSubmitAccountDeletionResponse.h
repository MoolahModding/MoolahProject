#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGDPRSubmitAccountDeletionResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGDPRSubmitAccountDeletionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    FAccelByteModelsGDPRSubmitAccountDeletionResponse();
};

