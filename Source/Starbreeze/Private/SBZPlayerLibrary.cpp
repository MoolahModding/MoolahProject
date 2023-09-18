#include "SBZPlayerLibrary.h"

USBZPlayerLibrary::USBZPlayerLibrary() {
}

bool USBZPlayerLibrary::IsPlayerInRange(const UObject* WorldContextObject, const FVector& Location, float Range) {
    return false;
}

ASBZPlayerCharacter* USBZPlayerLibrary::GetRandomPlayerCharacterFromStream(const UObject* WorldContextObject, const FRandomStream& Stream) {
    return NULL;
}

ASBZPlayerCharacter* USBZPlayerLibrary::GetRandomPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}

int32 USBZPlayerLibrary::GetNumConnectedPlayers(const UObject* WorldContextObject) {
    return 0;
}

int32 USBZPlayerLibrary::GetNumAlivePlayers(const UObject* WorldContextObject) {
    return 0;
}

APlayerState* USBZPlayerLibrary::GetLocalPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

APawn* USBZPlayerLibrary::GetLocalPlayerPawn(const UObject* WorldContextObject) {
    return NULL;
}

APlayerController* USBZPlayerLibrary::GetLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

void USBZPlayerLibrary::GetClosestPlayerToLocation(const UObject* WorldContextObject, const FVector& Location, ASBZPlayerCharacter*& PlayerCharacter, float& Distance) {
}

void USBZPlayerLibrary::GetClosestPlayerToActor(const UObject* WorldContextObject, const AActor* Actor, ASBZPlayerCharacter*& PlayerCharacter, float& Distance) {
}

TArray<ASBZPlayerCharacter*> USBZPlayerLibrary::GetAllSBZPlayerCharacters(const UObject* WorldContextObject) {
    return TArray<ASBZPlayerCharacter*>();
}


