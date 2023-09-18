#include "ABLobby.h"

UABLobby::UABLobby() {
}

void UABLobby::UnbindEvent() {
}

void UABLobby::SetRetryParameters(const FSetRetryParametersRequest& Request) {
}

void UABLobby::SetOnErrorNotification(FDErrorHandler OnErrorNotification) {
}

void UABLobby::SetOnConnected(FDHandler OnConnected) {
}

FString UABLobby::RequestDS(const FRequestDSModel& Request) {
    return TEXT("");
}

FString UABLobby::RefreshToken(const FRefreshTokenRequest& Request, FDRefreshTokenResponseDelegate OnResponse, FDErrorHandler OnError) {
    return TEXT("");
}

bool UABLobby::IsConnected() {
    return false;
}

void UABLobby::Disconnect() {
}

void UABLobby::Connect() {
}


