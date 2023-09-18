#include "SBZPropDamageComponent.h"
#include "Net/UnrealNetwork.h"

USBZPropDamageComponent::USBZPropDamageComponent() {
    
}

void USBZPropDamageComponent::OnRep_DamagePools() {
}

void USBZPropDamageComponent::HandleTakeRadialDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FRadialDamageParams& Params, const FVector& Origin, const UDamageType* DamageType, AActor* DamageCauser) {
}

void USBZPropDamageComponent::HandleTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void USBZPropDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPropDamageComponent, DamagePools);
}


