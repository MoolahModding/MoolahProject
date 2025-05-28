#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionRecentPlayer.h"
#include "AccelByteModelsV2SessionRecentPlayers.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2SessionRecentPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionRecentPlayer> Data;
    
    FAccelByteModelsV2SessionRecentPlayers();
};

