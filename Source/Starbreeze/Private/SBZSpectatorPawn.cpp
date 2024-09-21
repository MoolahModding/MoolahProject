#include "SBZSpectatorPawn.h"
#include "Engine/EngineTypes.h"

ASBZSpectatorPawn::ASBZSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
}


