#include "SBZZiplineMotor.h"
#include "Components/SceneComponent.h"
#include "SBZCableComponent.h"

ASBZZiplineMotor::ASBZZiplineMotor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AheadOffsetFromZipLiner = 180.00f;
    this->VerticalAheadOffsetFromZipLiner = 150.00f;
    this->CableComponent = CreateDefaultSubobject<USBZCableComponent>(TEXT("SBZCableComponent"));
}


