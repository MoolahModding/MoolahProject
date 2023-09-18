#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerStatusHistory.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsServerStatusHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Time_stamp;
    
    FAccelByteModelsServerStatusHistory();
};

