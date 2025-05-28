#include "ABServerLobby.h"

UABServerLobby::UABServerLobby() {
}

void UABServerLobby::WritePartyStorage(const FString& PartyId, FDPayloadModifier PayloadModifier, const int32& RetryAttempt, FDPartyDataNotifDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::SetSessionAttributeString(const FString& UserId, const FString& Key, const FString& Value, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::SetSessionAttribute(const FString& UserId, const TMap<FString, FString>& Attributes, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetSessionAttributeAll(const FString& UserId, FDSessionAttributeAllResponseDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetSessionAttribute(const FString& UserId, const FString& Key, FDSessionAttributeResponseDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetPartyStorage(const FString& PartyId, FDPartyDataNotifDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetPartyDataByUserId(const FString& UserId, FDDataPartyResponseDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetListOfBlockers(const FString& UserId, FDListBlockerResponseDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerLobby::GetListOfBlockedUsers(const FString& UserId, FDListBlockedUserResponseDelegate OnSuccess, FDErrorHandler OnError) {
}


