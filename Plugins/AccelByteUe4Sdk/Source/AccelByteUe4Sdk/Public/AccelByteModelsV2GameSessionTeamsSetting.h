#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionTeam.h"
#include "AccelByteModelsV2GameSessionTeamsSetting.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionTeamsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeam> Teams;
    
    FAccelByteModelsV2GameSessionTeamsSetting();
};

