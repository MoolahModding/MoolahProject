#include "SBZWwiseMotionManagerComponent.h"
#include "AkComponent.h"

USBZWwiseMotionManagerComponent::USBZWwiseMotionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->RootComponent = NULL;
    this->WwiseMotionBusName = TEXT("Wwise_Motion_AD");
}


