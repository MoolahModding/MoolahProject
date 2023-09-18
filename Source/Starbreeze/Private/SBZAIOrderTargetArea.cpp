#include "SBZAIOrderTargetArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASBZAIOrderTargetArea::ASBZAIOrderTargetArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bConsiderCoversDirection = true;
    this->ArcAngle = 30.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(RootComponent);
    this->Room = NULL;
    FProperty* p_bHidden = GetClass()->FindPropertyByName("bHidden");
    *p_bHidden->ContainerPtrToValuePtr<uint8>(this) = true;
    this->bNetLoadOnClient = false;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void ASBZAIOrderTargetArea::UpdateCoverPoints() {
}

void ASBZAIOrderTargetArea::SetEnabled(bool bEnable) {
}

bool ASBZAIOrderTargetArea::IsEnabled() const {
    return false;
}


