#include "SBZVotingReplicatedProxy.h"
#include "Net/UnrealNetwork.h"

void ASBZVotingReplicatedProxy::Server_NotifySendVoteRecall_Implementation(FUniqueNetIdRepl PlayerId) {
}

void ASBZVotingReplicatedProxy::Server_NotifySendVoteInitiate_Implementation(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, bool bVotePositive) {
}

void ASBZVotingReplicatedProxy::Server_NotifySendVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer) {
}

void ASBZVotingReplicatedProxy::MulticastReceiveVoteRecall_Implementation(FUniqueNetIdRepl PlayerId) {
}

void ASBZVotingReplicatedProxy::MulticastReceiveVoteInitiate_Implementation(ESBZVotingType VoteType, const TArray<FString>& VoteInitArgs, FUniqueNetIdRepl PlayerInitiated, FDateTime TimeStarted, const TArray<FUniqueNetIdRepl>& PlayersPending) {
}

void ASBZVotingReplicatedProxy::MulticastReceiveVoteAnswer_Implementation(FUniqueNetIdRepl PlayerId, ESBZVotingAnswer VotingAnswer) {
}

void ASBZVotingReplicatedProxy::MulticastReceiveLocalizedChatMessage_Implementation(const FString& FormatLocaleKey, const TArray<FString>& ExportedArgsNames, const TArray<FString>& ExportedArgsStrings, const TArray<FString>& ArgsToLocalizeNames, const TArray<FString>& ArgsToLocalizeLocaleKeys) {
}

void ASBZVotingReplicatedProxy::MulticastReceiveChatMessage_Implementation(const FString& Message) {
}

void ASBZVotingReplicatedProxy::MulticastExecuteAction_Implementation() {
}

void ASBZVotingReplicatedProxy::MulticastClearCurrentVote_Implementation() {
}

void ASBZVotingReplicatedProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZVotingReplicatedProxy, bDummy);
}

ASBZVotingReplicatedProxy::ASBZVotingReplicatedProxy() {
    this->bDummy = false;
}

