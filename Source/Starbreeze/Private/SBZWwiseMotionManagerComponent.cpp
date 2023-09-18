#include "SBZWwiseMotionManagerComponent.h"
#include "AkComponent.h"

USBZWwiseMotionManagerComponent::USBZWwiseMotionManagerComponent() {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->RootComponent = NULL;
    this->WwiseMotionBusName = TEXT("Wwise_Motion_AD");
}


