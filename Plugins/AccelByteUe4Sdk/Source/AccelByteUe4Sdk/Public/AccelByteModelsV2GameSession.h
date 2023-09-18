#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2BaseSession.h"
#include "AccelByteModelsV2GameSessionDSInformation.h"
#include "AccelByteModelsV2GameSessionTeam.h"
#include "AccelByteModelsV2GameSession.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSession : public FAccelByteModelsV2BaseSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeam> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2GameSessionDSInformation DSInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackfillTicketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchPool;
    
    FAccelByteModelsV2GameSession();
};

