#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

USBZDebugActorComponentFlow::USBZDebugActorComponentFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->LastObject = (USBZDebugObjectFlow*)Object;
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->LastInstanceObject = (USBZDebugObjectFlow*)InstanceObject;
    this->DynamicObject = NULL;
    this->LastDynamicObject = NULL;
}


