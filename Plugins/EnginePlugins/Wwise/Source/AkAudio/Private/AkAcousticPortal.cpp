#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"
#include "Components/BrushComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    this->Portal->SetupAttachment(GetBrushComponent());
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


