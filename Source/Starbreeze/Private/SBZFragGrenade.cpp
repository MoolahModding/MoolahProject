#include "SBZFragGrenade.h"
#include "Components/SphereComponent.h"
#include "SBZFragGrenadeData.h"

ASBZFragGrenade::ASBZFragGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->DataType = USBZFragGrenadeData::StaticClass();
    this->SphereCollision = (USphereComponent*)RootComponent;
}


