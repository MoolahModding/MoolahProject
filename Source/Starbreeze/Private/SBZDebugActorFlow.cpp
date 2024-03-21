#include "SBZDebugActorFlow.h"
#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

ASBZDebugActorFlow::ASBZDebugActorFlow() {
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Float = 0.00f;
    this->Component = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("Component"));
    this->InstanceComponent = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("InstanceComponent"));
    this->DynamicComponent = NULL;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->DynamicObject = NULL;
}

