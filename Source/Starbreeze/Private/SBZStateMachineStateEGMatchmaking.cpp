#include "SBZStateMachineStateEGMatchmaking.h"

USBZStateMachineStateEGMatchmaking::USBZStateMachineStateEGMatchmaking() {
    this->LoadingScreen = NULL;
    this->MatchmakingData = NULL;
    this->ApiGatewayEndpoint = TEXT("https://ywaqi7bkyb.execute-api.eu-central-1.amazonaws.com/Stage");
    this->StartGameSessionURI = TEXT("/start_matchmaking");
}

void USBZStateMachineStateEGMatchmaking::HandleBeaconDisconnect() {
}


