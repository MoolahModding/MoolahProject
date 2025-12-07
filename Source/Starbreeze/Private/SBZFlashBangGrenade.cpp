#include "SBZFlashBangGrenade.h"
#include "Components/CapsuleComponent.h"

ASBZFlashBangGrenade::ASBZFlashBangGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->CapsuleCollision = (UCapsuleComponent*)RootComponent;
}


