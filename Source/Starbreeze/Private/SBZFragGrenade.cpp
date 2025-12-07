#include "SBZFragGrenade.h"
#include "Components/SphereComponent.h"

ASBZFragGrenade::ASBZFragGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->SphereCollision = (USphereComponent*)RootComponent;
}


