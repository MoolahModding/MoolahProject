#include "SBZFlashBangGrenade.h"
#include "Components/CapsuleComponent.h"

ASBZFlashBangGrenade::ASBZFlashBangGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->RootComponent = CapsuleCollision;
    this->Tags.AddDefaulted(1);
}


