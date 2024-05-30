#include "SBZAIPointOfInterestDeadBody.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"

ASBZAIPointOfInterestDeadBody::ASBZAIPointOfInterestDeadBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
}


