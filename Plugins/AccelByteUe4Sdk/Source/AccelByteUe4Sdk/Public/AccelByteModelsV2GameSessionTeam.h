#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionTeamParties.h"
#include "AccelByteModelsV2GameSessionTeam.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeamParties> Parties;
    
    FAccelByteModelsV2GameSessionTeam();
};

