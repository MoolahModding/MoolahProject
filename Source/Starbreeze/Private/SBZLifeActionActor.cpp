#include "SBZLifeActionActor.h"
#include "SBZLifeActionComponent.h"

ASBZLifeActionActor::ASBZLifeActionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
}


