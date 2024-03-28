#include "SBZStaticVehicle.h"
#include "AkComponent.h"

void ASBZStaticVehicle::TryActivateAlarm_Implementation() {
}

void ASBZStaticVehicle::SetLightType(ESBZVehicleLightType LightType, bool bIsOn) {
}

void ASBZStaticVehicle::SetLightCPDBroken(int32 CPDIndex, ESBZVehicleLightCPD LightBit, bool bIsBroken) {
}

ASBZStaticVehicle::ASBZStaticVehicle() {
    this->ActiveLightsBitmask = 0;
    this->VariationData = NULL;
    this->Seed = -1;
    this->AlarmEquippedChance = 1.00f;
    this->bHasAlarm = false;
    this->bAlarmActivated = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AlarmStartEvent = NULL;
    this->AlarmStopEvent = NULL;
}

