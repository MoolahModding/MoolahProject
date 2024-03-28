#include "SBZFragGrenade.h"
#include "Components/SphereComponent.h"

ASBZFragGrenade::ASBZFragGrenade() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
}

