#include "SBZAITaserMine.h"
#include "AkComponent.h"
#include "Components/SphereComponent.h"

ASBZAITaserMine::ASBZAITaserMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionRange = 100.00f;
    this->StunDuration = 3.00f;
    this->WalkedOnEffect = NULL;
    this->DestroyedEffect = NULL;
    this->DestroyedMesh = NULL;
    this->DestroyedMesh = NULL;
    this->TasedEffect = NULL;
    this->TasedEffect = NULL;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    FProperty* p_StaticMeshComponent_Parent = GetClass()->FindPropertyByName("StaticMeshComponent");
    this->OverlapSphere->SetupAttachment(*p_StaticMeshComponent_Parent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->PlaceSound = NULL;
    this->WalkedOnEvent = NULL;
    this->DestroyedEvent = NULL;
    this->AIExplosionRange = 250.00f;
    this->PlayerExplosionRange = 200.00f;
    this->Spawned = NULL;
    this->bReplicates = true;
    this->bCanBeInCluster = false;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZAITaserMine::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZAITaserMine::Multicast_OnWalkedOnTarget_Implementation(AActor* OtherActor) {
}

void ASBZAITaserMine::Multicast_OnWalkedOn_Implementation() {
}

void ASBZAITaserMine::DamageRejected() {
}


