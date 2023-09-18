#include "SBZSpectatorPawn.h"
#include "Engine/EngineTypes.h"

ASBZSpectatorPawn::ASBZSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->bReplicates = false;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_None;
}


