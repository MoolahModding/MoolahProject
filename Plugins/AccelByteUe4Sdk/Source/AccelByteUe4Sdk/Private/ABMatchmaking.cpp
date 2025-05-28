#include "ABMatchmaking.h"

UABMatchmaking::UABMatchmaking() {
}

void UABMatchmaking::StartMatchmaking(const FStartMatchmakingRequest& Request, FDStartMatchmakingResponse OnResponse, FDErrorHandler OnError) {
}

void UABMatchmaking::SetRejectConsent(const FSetRejectConsentRequest& Request, FDSetRejectConsentResponse OnResponse, FDErrorHandler OnError) {
}

void UABMatchmaking::SetReadyConsent(const FSetReadyConsentRequest& Request, FDSetReadyConsentResponse OnResponse, FDErrorHandler OnError) {
}

void UABMatchmaking::SetOnSetRejectConsent(FDSetRejectConsentNotif OnNotif) {
}

void UABMatchmaking::SetOnSetReadyConsent(FDSetReadyConsentNotif OnNotif) {
}

void UABMatchmaking::SetOnRematchmaking(FDRematchmakingNotif OnNotif) {
}

void UABMatchmaking::SetOnMatchmaking(FDMatchmakingNotif OnNotif) {
}

void UABMatchmaking::SetOnDs(FDDsNotif OnNotif) {
}

void UABMatchmaking::CancelMatchmaking(const FCancelMatchmakingRequest& Request, FDCancelMatchmakingResponse OnResponse, FDErrorHandler OnError) {
}


