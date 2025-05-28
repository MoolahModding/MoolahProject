#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    this->InitialState = AkAcousticPortalState::Open;
    this->bRequiresStateMigration = false;
    this->Portal->SetupAttachment(RootComponent);
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


