#include "PD3SpawnSquadPawn.h"

UPD3SpawnSquadPawn::UPD3SpawnSquadPawn() {
    this->PawnVariation = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = UPD3SpawnSquadPawn::StaticClass();
}


