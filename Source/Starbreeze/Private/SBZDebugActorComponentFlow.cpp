#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

USBZDebugActorComponentFlow::USBZDebugActorComponentFlow() {
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->DynamicObject = NULL;
}


