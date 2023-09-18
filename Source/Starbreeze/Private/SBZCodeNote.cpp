#include "SBZCodeNote.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ASBZCodeNote::ASBZCodeNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CodeToShow = 0;
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->CodeWidget->SetupAttachment(RootComponent);
    this->bForceShowTrueCode = false;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZCodeNote::OnRep_CodeToShow() {
}

void ASBZCodeNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCodeNote, CodeToShow);
}


