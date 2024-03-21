#include "SBZFlashBangGrenade.h"
#include "Components/CapsuleComponent.h"

ASBZFlashBangGrenade::ASBZFlashBangGrenade() {
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
}

