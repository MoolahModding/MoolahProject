#include "SBZShockGrenade.h"
#include "Components/CapsuleComponent.h"
#include "SBZShockGrenadeData.h"

ASBZShockGrenade::ASBZShockGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->DataType = USBZShockGrenadeData::StaticClass();
    this->CapsuleCollision = (UCapsuleComponent*)RootComponent;
    this->CurrentChainedActor = NULL;
    this->MinInterweaveAngle = 65.00f;
    this->MinInterweaveDot = 0.91f;
    this->TraceEffect = NULL;
    this->TraceEffectDistanceName = TEXT("Distance");
    this->TraceEffectDurationName = TEXT("Duration");
    this->TraceEffectStunDurationName = TEXT("StunDuration");
    this->ActiveDetonationEffect = NULL;
}


