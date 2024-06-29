#include "SBZFlashBangGrenade.h"
#include "Components/CapsuleComponent.h"
#include "SBZFlashBangGrenadeData.h"

ASBZFlashBangGrenade::ASBZFlashBangGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->DataType = USBZFlashBangGrenadeData::StaticClass();
    this->CapsuleCollision = (UCapsuleComponent*)RootComponent;
}


