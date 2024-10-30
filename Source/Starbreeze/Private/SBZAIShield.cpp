#include "SBZAIShield.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

USBZAIShield::USBZAIShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->VisorArmor[0] = 0.00f;
    this->VisorArmor[1] = 0.00f;
    this->VisorArmor[2] = 0.00f;
    this->VisorArmor[3] = 0.00f;
    this->ShieldArmorHardness[0] = 0.00f;
    this->ShieldArmorHardness[1] = 0.00f;
    this->ShieldArmorHardness[2] = 0.00f;
    this->ShieldArmorHardness[3] = 0.00f;
    this->VisorArmorHardness[0] = 0.00f;
    this->VisorArmorHardness[1] = 0.00f;
    this->VisorArmorHardness[2] = 0.00f;
    this->VisorArmorHardness[3] = 0.00f;
    this->FrontAttachSocketName = TEXT("LeftHandWeapon");
    this->BackAttachSocketName = TEXT("Spine3_BackAttachment_01");
    this->BreakEvent = NULL;
    this->BreakComment = NULL;
    this->ShieldAttributSet = NULL;
    this->bIsBroken = false;
    this->bIsIndestructible = false;
    this->VisorCPDIndex = 22;
    this->VisorCPDVal = 1000000.00f;
    this->VisorDamageSteps = 4;
    this->ShieldDamageCPDIndexArray.AddDefaulted(6);
    this->CurrentMaterialHitCountArray.AddDefaulted(6);
    this->MaxCosmeticDamageHits = 5;
    this->CosmeticExplosionDamageModifier = 3.00f;
    this->CosmeticDamageModifier = 0.50f;
    this->MinDistanceToCosmeticHit = 45.00f;
    this->ExplosionBlockDegrees = 45.00f;
    this->ExplosionBlockDot = 0.71f;
    this->LightConeWidthDegrees = 30.00f;
    this->PlayerLightDirectionMinDegrees = 20.00f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->ReflectorShieldRadius = 500.00f;
    this->LightMaterialEmissiveValue = 100.00f;
    this->LightLength = 1500.00f;
    this->LightMaxDistance = 1500.00f;
    this->MaterialOnOffCPDIndex = 11;
    this->RedCPDIndex = 12;
    this->GreenCPDIndex = 13;
    this->BlueCPDIndex = 14;
    this->MaterialEmissiveCPDIndex = 15;
    this->NiagaraComponent = NULL;
}

void USBZAIShield::OnShieldEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USBZAIShield::OnRep_ShieldBreak() {
}

void USBZAIShield::OnRep_CurrentMaterialHitCountArray() {
}

void USBZAIShield::OnPlayerEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USBZAIShield::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USBZAIShield::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USBZAIShield::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}

void USBZAIShield::Multicast_ShieldBreak_Implementation() {
}

void USBZAIShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIShield, CurrentMaterialHitCountArray);
}


