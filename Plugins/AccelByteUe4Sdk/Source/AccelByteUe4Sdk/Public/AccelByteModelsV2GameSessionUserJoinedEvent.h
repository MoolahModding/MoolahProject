#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsV2GameSessionUserJoinedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionUserJoinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    FAccelByteModelsV2GameSessionUserJoinedEvent();
};

