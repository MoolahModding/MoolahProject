#include "SBZDamageEvent.h"

FSBZDamageEvent::FSBZDamageEvent() {
    this->Attacker = NULL;
    this->Causer = NULL;
    this->Victim = NULL;
    this->EquippableData = NULL;
    this->ThrowableData = NULL;
    this->Damage = 0.00f;
    this->ArmorDamage = 0.00f;
    this->Armor = 0.00f;
    this->HealthDamage = 0.00f;
    this->OverHealDamage = 0.00f;
    this->OverskillProgressionDamage = 0.00f;
    this->Distance = 0.00f;
    this->bIsCritical = false;
    this->bIsArmorBreak = false;
    this->bIsKillshot = false;
    this->bIsFrequent = false;
    this->bIsOverskillBroken = false;
    this->HitCount = 0;
    this->EquippableIndex = 0;
}

