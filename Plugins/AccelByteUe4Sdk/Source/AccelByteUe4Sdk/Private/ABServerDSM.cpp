#include "ABServerDSM.h"

UABServerDSM::UABServerDSM() {
}

void UABServerDSM::SetServerType(UEnumServerType Type) {
}

void UABServerDSM::SetServerName(const FString& Name) {
}

void UABServerDSM::SetOnAutoShutdownResponse(FDHandler OnAutoShutdown) {
}

void UABServerDSM::SetOnAutoShutdownErrorDelegate(FDErrorHandler OnShutdownError) {
}

void UABServerDSM::SendShutdownToDSM(const bool& KillMe, const FString& MatchId, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerDSM::RegisterServerToDSM(const int32& Port, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerDSM::RegisterLocalServerToDSM(const FString& IPAddress, const int32& Port, const FString& ServerName, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerDSM::GetSessionId(FDServerSessionResponseDelegate OnSuccess, FDErrorHandler OnError) {
}

void UABServerDSM::GetServerInfo(FDServerInfoDelegate OnSuccess, FDErrorHandler OnError) {
}

int32 UABServerDSM::GetPlayerNum() {
    return 0;
}

void UABServerDSM::DeregisterLocalServerFromDSM(const FString& ServerName, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABServerDSM::ConfigureAutoShutdown(int32 TickSeconds, int32 CountdownStart) {
}


