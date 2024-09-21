#include "SBZGameStateMachineFunctionLibrary.h"

USBZGameStateMachineFunctionLibrary::USBZGameStateMachineFunctionLibrary() {
}

bool USBZGameStateMachineFunctionLibrary::IsValidPakchunkIndex(int32 PakchunkIndex) {
    return false;
}

bool USBZGameStateMachineFunctionLibrary::IsPie(UObject* WorldContextObject) {
    return false;
}

int32 USBZGameStateMachineFunctionLibrary::GetLobbyTimeout(UObject* WorldContextObject) {
    return 0;
}

TEnumAsByte<ESBZGameStateMachineState> USBZGameStateMachineFunctionLibrary::GetGameStateMachineState(UObject* WorldContextObject) {
    return SM_NotLoggedIn;
}

USBZGameStateMachine* USBZGameStateMachineFunctionLibrary::GetGameStateMachine(const UObject* WorldContextObject) {
    return NULL;
}

ESBZCurrentPlatform USBZGameStateMachineFunctionLibrary::GetCurrentPlatform() {
    return ESBZCurrentPlatform::EP_UNKNOWN;
}

float USBZGameStateMachineFunctionLibrary::GetChunkInstallProgress(int32 ChunkID) {
    return 0.0f;
}

int32 USBZGameStateMachineFunctionLibrary::GetAcceptMatchTimeout(UObject* WorldContextObject) {
    return 0;
}


