#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsTurnServer.h"
#include "AccelByteModelsTurnServerList.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsTurnServerList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsTurnServer> Servers;
    
    FAccelByteModelsTurnServerList();
};

