#include "SBZFragGrenade.h"
#include "Components/SphereComponent.h"

ASBZFragGrenade::ASBZFragGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
    this->RootComponent = SphereCollision;
    this->Tags.AddDefaulted(1);
}


