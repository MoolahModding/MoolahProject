#include "SBZAIPointOfInterestDeadBody.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "Components/SphereComponent.h"

ASBZAIPointOfInterestDeadBody::ASBZAIPointOfInterestDeadBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    FProperty* p_SphereCollision_Parent = GetClass()->FindPropertyByName("SphereCollision");
    this->LifeActionInstance->SetupAttachment(*p_SphereCollision_Parent->ContainerPtrToValuePtr<USphereComponent*>(this));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
}


