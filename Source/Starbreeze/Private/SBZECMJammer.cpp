#include "SBZECMJammer.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"


ASBZECMJammer::ASBZECMJammer() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

