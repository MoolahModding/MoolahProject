#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsLeaderboardGetRankingByCycleIdPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLeaderboardGetRankingByCycleIdPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CycleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FAccelByteModelsLeaderboardGetRankingByCycleIdPayload();
};

