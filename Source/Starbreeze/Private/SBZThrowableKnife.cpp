#include "SBZThrowableKnife.h"
#include "Components/BoxComponent.h"
#include "SBZPlayerThrowableKnifeData.h"

ASBZThrowableKnife::ASBZThrowableKnife(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("BoxCollision"))) {
    this->Tags.AddDefaulted(1);
    this->DataType = USBZPlayerThrowableKnifeData::StaticClass();
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->OverrideThrowableProjectileHitEvent = NULL;
    this->OverrideThrowableProjectileBounceHitEvent = NULL;
    this->AmmoPickupAsset = NULL;
    this->ThrowableKnifePOIClass = NULL;
    this->ThrowableKnifePOIInstance = NULL;
    this->LastHitComponent = NULL;
    this->AmmoPickup = NULL;
}

void ASBZThrowableKnife::Server_ReplicateDamage_Implementation(const FSBZKnifeProjectileTargetData& TargetData) {
}

void ASBZThrowableKnife::Server_PickedUp_Implementation() {
}

void ASBZThrowableKnife::Server_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill, UPrimitiveComponent* InHitComponent, const FName& InBoneName, const FVector& InRelativeLocation) {
}

void ASBZThrowableKnife::OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZThrowableKnife::Multicast_FireKnife_Implementation(const FSBZKnifeProjectileTargetData& TargetData) {
}

void ASBZThrowableKnife::Multicast_CreateImpact_Implementation(bool bInShouldBladeBounce, bool bInHasRetrieverSkill) {
}

bool ASBZThrowableKnife::HasRetrieverSkill() const {
    return false;
}


