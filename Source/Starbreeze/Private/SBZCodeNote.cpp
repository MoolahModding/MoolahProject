#include "SBZCodeNote.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZCodeNote::OnRep_CodeToShow() {
}

void ASBZCodeNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCodeNote, CodeToShow);
}

ASBZCodeNote::ASBZCodeNote() {
    this->CodeToShow = 0;
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->bForceShowTrueCode = false;
}

