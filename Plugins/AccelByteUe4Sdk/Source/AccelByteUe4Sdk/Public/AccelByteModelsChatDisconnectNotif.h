#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatDisconnectNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatDisconnectNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FAccelByteModelsChatDisconnectNotif();
};

