#include "SBZDebugActorFlow.h"
#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

ASBZDebugActorFlow::ASBZDebugActorFlow() {
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Float = 0.00f;
    this->Component = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("Component"));
    this->LastComponent = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("LastComponent"));
    this->InstanceComponent = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("InstanceComponent"));
    this->LastInstanceComponent = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("LastInstanceComponent"));
    this->DynamicComponent = NULL;
    this->LastDynamicComponent = NULL;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->LastObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("LastObject"));
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->LastInstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("LastInstanceObject"));
    this->DynamicObject = NULL;
    this->LastDynamicObject = NULL;
}

