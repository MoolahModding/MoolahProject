#include "SBZECMJammer.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"

ASBZECMJammer::ASBZECMJammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->OwningPlayerState = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
    this->BoxComponent->SetupAttachment(RootComponent);
}



