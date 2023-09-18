#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatConnectNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatConnectNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    FAccelByteModelsChatConnectNotif();
};

