#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDisconnectNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDisconnectNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FAccelByteModelsDisconnectNotif();
};

