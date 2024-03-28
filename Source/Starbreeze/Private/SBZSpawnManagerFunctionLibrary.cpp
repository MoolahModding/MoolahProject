#include "SBZSpawnManagerFunctionLibrary.h"

void USBZSpawnManagerFunctionLibrary::WaitForPawnRequest(const UObject* WorldContextObject, FSBZPawnSpawnRequestHandle Handle, FLatentActionInfo LatentInfo) {
}

void USBZSpawnManagerFunctionLibrary::WaitForActorRequest(const UObject* WorldContextObject, FSBZActorSpawnRequestHandle Handle, FLatentActionInfo LatentInfo) {
}

FSBZPawnSpawnRequestHandle USBZSpawnManagerFunctionLibrary::RequestPawn(const UObject* WorldContextObject, const TArray<FSBZPawnSpawnRequest>& RequestArray, const FSBZPawnSpawnDynamicDelegate& Spawned, const FSBZPawnSpawnRequestDoneDynamicDelegate& RequestDone, FSBZSpawnRequestOptions Options, FName DebugName) {
    return FSBZPawnSpawnRequestHandle{};
}

FSBZActorSpawnRequestHandle USBZSpawnManagerFunctionLibrary::RequestActor(const UObject* WorldContextObject, const TArray<FSBZActorSpawnRequest>& RequestArray, FSBZSpawnRequestOptions Options, const FSBZActorSpawnRequestDynamicDelegate& Spawned, const FSBZActorSpawnRequestDoneDynamicDelegate& RequestDone, FName DebugName) {
    return FSBZActorSpawnRequestHandle{};
}

ESBZSpawnRequestStatus USBZSpawnManagerFunctionLibrary::GetPawnRequestStatus(const FSBZPawnSpawnRequestHandle& Handle) {
    return ESBZSpawnRequestStatus::Pending;
}

int32 USBZSpawnManagerFunctionLibrary::GetPawnRequestCount(const FSBZPawnSpawnRequestHandle& Handle) {
    return 0;
}

FSBZPawnSpawnRequest USBZSpawnManagerFunctionLibrary::GetPawnRequest(const FSBZPawnSpawnRequestHandle& Handle, int32 Index) {
    return FSBZPawnSpawnRequest{};
}

TArray<APawn*> USBZSpawnManagerFunctionLibrary::GetCreatedPawns(const FSBZPawnSpawnRequestHandle& Handle, bool bIncludeMissingPawns) {
    return TArray<APawn*>();
}

TArray<AActor*> USBZSpawnManagerFunctionLibrary::GetCreatedActors(const FSBZActorSpawnRequestHandle& Handle, bool bRemoveMissingActors) {
    return TArray<AActor*>();
}

ESBZSpawnRequestStatus USBZSpawnManagerFunctionLibrary::GetActorRequestStatus(const FSBZActorSpawnRequestHandle& Handle) {
    return ESBZSpawnRequestStatus::Pending;
}

int32 USBZSpawnManagerFunctionLibrary::GetActorRequestCount(const FSBZActorSpawnRequestHandle& Handle) {
    return 0;
}

FSBZActorSpawnRequest USBZSpawnManagerFunctionLibrary::GetActorRequest(const FSBZActorSpawnRequestHandle& Handle, int32 Index) {
    return FSBZActorSpawnRequest{};
}

USBZSpawnManagerFunctionLibrary::USBZSpawnManagerFunctionLibrary() {
}

