#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionEndedNotification.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionEndedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Session_id;
    
    FAccelByteModelsSessionEndedNotification();
};

