#include "SBZDebugActorFlow.h"
#include "Components/SceneComponent.h"
#include "SBZDebugActorComponentFlow.h"
#include "SBZDebugObjectFlow.h"

ASBZDebugActorFlow::ASBZDebugActorFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bIs = true;
    this->bIsDuplicateTransient = true;
    this->Float = 0.00f;
    this->Component = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("Component"));
    this->LastComponent = (USBZDebugActorComponentFlow*)Component;
    this->InstanceComponent = CreateDefaultSubobject<USBZDebugActorComponentFlow>(TEXT("InstanceComponent"));
    this->LastInstanceComponent = (USBZDebugActorComponentFlow*)InstanceComponent;
    this->DynamicComponent = NULL;
    this->LastDynamicComponent = NULL;
    this->Object = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("Object"));
    this->LastObject = (USBZDebugObjectFlow*)Object;
    this->InstanceObject = CreateDefaultSubobject<USBZDebugObjectFlow>(TEXT("InstanceObject"));
    this->LastInstanceObject = (USBZDebugObjectFlow*)InstanceObject;
    this->DynamicObject = NULL;
    this->LastDynamicObject = NULL;
}


