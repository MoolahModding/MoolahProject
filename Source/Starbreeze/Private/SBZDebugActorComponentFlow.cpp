#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

USBZDebugActorComponentFlow::USBZDebugActorComponentFlow() {
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->LastObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("LastObject"));
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->LastInstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("LastInstanceObject"));
    this->DynamicObject = NULL;
    this->LastDynamicObject = NULL;
}

