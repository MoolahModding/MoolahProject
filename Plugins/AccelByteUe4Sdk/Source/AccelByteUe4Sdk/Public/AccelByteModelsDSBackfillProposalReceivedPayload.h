#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSRegisteredPayload.h"
#include "AccelByteModelsV2GameSessionTeam.h"
#include "AccelByteModelsV2MatchmakingTicket.h"
#include "AccelByteModelsDSBackfillProposalReceivedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSBackfillProposalReceivedPayload : public FAccelByteModelsDSRegisteredPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackfillTicketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProposalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2GameSessionTeam> ProposedTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2MatchmakingTicket> AddedTickets;
    
    FAccelByteModelsDSBackfillProposalReceivedPayload();
};

