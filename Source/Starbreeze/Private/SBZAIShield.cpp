#include "SBZAIShield.h"

void USBZAIShield::OnRep_ShieldBreak() {
}

void USBZAIShield::OnCharacterAnimEventActive(const FGameplayTag& EventTag, bool bActive) {
}

void USBZAIShield::Multicast_ShieldBreak_Implementation() {
}

USBZAIShield::USBZAIShield() {
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
    this->ExplosionBlockDegrees = 45.00f;
    this->ExplosionBlockDot = 0.71f;
}

