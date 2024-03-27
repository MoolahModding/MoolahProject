#pragma once
#include "CoreMinimal.h"
#include "AccelByteSignalingTurnServer.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteSignalingTurnServer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Host;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    ACCELBYTENETWORKUTILITIES_API FAccelByteSignalingTurnServer();
};

