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
    ASBZVotingReplicatedProxy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifySendVoteRecall(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifySendVoteInitiate(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, const FUniqueNetIdRepl& PlayerInitiated, const FUniqueNetIdRepl& PlayerTargeted, bool bVotePositive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifySendVoteAnswer(const FUniqueNetIdRepl& PlayerId, ESBZVotingAnswer VotingAnswer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifyClientDisconnected(const FUniqueNetIdRepl& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveVoteRecall(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveVoteInitiate(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, const FUniqueNetIdRepl& PlayerInitiated, const FUniqueNetIdRepl& PlayerTargeted, FDateTime TimeStarted, const TArray<FUniqueNetIdRepl>& PlayersPending);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveVoteAnswer(const FUniqueNetIdRepl& PlayerId, ESBZVotingAnswer VotingAnswer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveLocalizedChatMessage(const FString& FormatTableId, const FString& FormatLocaleKey, const TArray<FString>& ExportedArgsNames, const TArray<FString>& ExportedArgsStrings, const TArray<FString>& ArgsToLocalizeNames, const TArray<FString>& ArgsToLocalizeTableIds, const TArray<FString>& ArgsToLocalizeLocaleKeys);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveClientDisconnected(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveChatMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastExecuteAction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClearCurrentVote();
    
};

