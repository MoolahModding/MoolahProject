#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZVoiceSessionDomain.h"
#include "ETLMVoiceSessionState.h"
#include "SBZVoiceSessionData.generated.h"

USTRUCT(BlueprintType)
struct FSBZVoiceSessionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZVoiceSessionDomain Domain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl CreatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETLMVoiceSessionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayersFailedToCreate;
    
    STARBREEZE_API FSBZVoiceSessionData();
};

