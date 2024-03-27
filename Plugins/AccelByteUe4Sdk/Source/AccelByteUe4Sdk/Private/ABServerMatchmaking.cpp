#include "ABServerMatchmaking.h"

void UABServerMatchmaking::RemoveUserFromSession(const FString& ChannelName, const FString& MatchId, const FString& UserId, const FAccelByteModelsMatchmakingResult& OptionalBody, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::RebalanceMatchmakingBasedOnMMR(const FString& MatchId, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::QuerySessionStatus(const FString& MatchId, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::EnqueueJoinableSession(const FAccelByteModelsMatchmakingResult& MatchmakingResult, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::DequeueJoinableSession(const FString& MatchId, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::DeactivateStatusPolling() {
}

void UABServerMatchmaking::AddUserToSession(const FString& ChannelName, const FString& MatchId, const FString& UserId, const FString& OptionalPartyId, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerMatchmaking::ActivateSessionStatusPolling(const FString& MatchId, int32 IntervalSec, FDMatchmakingResultDelegate OnSuccess, FDErrorHandler OnError) {
}

UABServerMatchmaking::UABServerMatchmaking() {
}

