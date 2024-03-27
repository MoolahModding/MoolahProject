#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ESBZVotingAnswer.h"
#include "ESBZVotingType.h"
#include "SBZVotingReplicatedProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZVotingReplicatedProxy : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDummy: 1;
    
public:
    ASBZVotingReplicatedProxy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server)
    void Server_NotifySendVoteRecall(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(Reliable, Server)
    void Server_NotifySendVoteInitiate(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, bool bVotePositive);
    
    UFUNCTION(Reliable, Server)
    void Server_NotifySendVoteAnswer(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer);
    
    UFUNCTION(Reliable, Server)
    void Server_NotifyClientDisconnected(FUniqueNetIdRepl PlayerId);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveVoteRecall(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveVoteInitiate(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FDateTime TimeStarted, const TArray<FUniqueNetIdRepl>& PlayersPending);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveVoteAnswer(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveLocalizedChatMessage(const FString& FormatLocaleKey, const TArray<FString>& ExportedArgsNames, const TArray<FString>& ExportedArgsStrings, const TArray<FString>& ArgsToLocalizeNames, const TArray<FString>& ArgsToLocalizeLocaleKeys);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveClientDisconnected(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastReceiveChatMessage(const FString& Message);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastExecuteAction();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastClearCurrentVote();
    
};

