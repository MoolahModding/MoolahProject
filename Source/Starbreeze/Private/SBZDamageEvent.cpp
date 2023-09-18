#include "SBZDamageEvent.h"

FSBZDamageEvent::FSBZDamageEvent() {
    this->Attacker = NULL;
    this->Causer = NULL;
    this->Victim = NULL;
    this->EquippableData = NULL;
    this->ThrowableData = NULL;
    this->Damage = 0.00f;
    this->ArmorDamage = 0.00f;
    this->HealthDamage = 0.00f;
    this->bCritical = false;
    this->bWasArmorBroken = false;
    this->bIsKillshot = false;
    this->bIsFrequent = false;
}

