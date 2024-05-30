#include "SBZGameEventBroker.h"

USBZGameEventBroker::USBZGameEventBroker() {
}

void USBZGameEventBroker::SendChatMessage(const FSBZPlayerChatEvent& ChatEventData) {
}

void USBZGameEventBroker::SendCallMessage(const FSBZPlayerCallEvent& CallEventData) {
}

void USBZGameEventBroker::PostOnSystemChatMessageReceived(const FSBZSystemChatEvent& ChatEventData) {
}

void USBZGameEventBroker::PostOnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData) {
}

void USBZGameEventBroker::PostOnPlayerChatMessageRecieved(const FSBZPlayerChatEvent& ChatEventData) {
}

void USBZGameEventBroker::PostOnCrewAIChatMessageReceived(const FSBZAICrewChatEvent& ChatEventData) {
}

void USBZGameEventBroker::PostOnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData) {
}


