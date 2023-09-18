#include "SBZStaticVehicle.h"
#include "AkComponent.h"

ASBZStaticVehicle::ASBZStaticVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveLightsBitmask = 0;
    this->VariationData = NULL;
    this->Seed = -1;
    this->AlarmEquippedChance = 1.00f;
    this->bHasAlarm = false;
    this->bAlarmActivated = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    FProperty* p_StaticMeshComponent_Parent = GetClass()->FindPropertyByName("StaticMeshComponent");
    this->AkComponent->SetupAttachment(*p_StaticMeshComponent_Parent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this));
    this->AlarmStartEvent = NULL;
    this->AlarmStopEvent = NULL;
    this->bCanBeInCluster = false;
}

void ASBZStaticVehicle::TryActivateAlarm_Implementation() {
}

void ASBZStaticVehicle::SetLightType(ESBZVehicleLightType LightType, bool bIsOn) {
}

void ASBZStaticVehicle::SetLightCPDBroken(int32 CPDIndex, ESBZVehicleLightCPD LightBit, bool bIsBroken) {
}


