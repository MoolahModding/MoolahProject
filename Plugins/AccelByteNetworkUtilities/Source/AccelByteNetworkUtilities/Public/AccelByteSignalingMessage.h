#pragma once
#include "CoreMinimal.h"
#include "AccelByteSignalingTurnServer.h"
#include "AccelByteSignalingMessage.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteSignalingMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteSignalingTurnServer TurnServer;
    
    ACCELBYTENETWORKUTILITIES_API FAccelByteSignalingMessage();
};

