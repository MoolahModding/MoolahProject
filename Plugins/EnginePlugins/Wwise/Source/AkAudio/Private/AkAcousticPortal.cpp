#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->Portal->SetupAttachment(p_BrushComponent_Parent->ContainerPtrToValuePtr<BrushComponent>(this));
    this->InitialState = AkAcousticPortalState::Open;
    this->bRequiresStateMigration = false;
    this->bColored = true;
}

void AAkAcousticPortal::SetExtent(const FVector& Extent) {
}

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}


