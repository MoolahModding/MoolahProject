#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerInfo.h"
#include "AccelByteModelsV2GameSession.h"
#include "AccelByteModelsV2DSStatusChangedNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2DSStatusChangedNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsServerInfo GameServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2GameSession Session;
    
    FAccelByteModelsV2DSStatusChangedNotif();
};

