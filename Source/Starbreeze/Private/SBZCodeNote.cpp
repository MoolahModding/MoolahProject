#include "SBZCodeNote.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ASBZCodeNote::ASBZCodeNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CodeToShow = 0;
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->bForceShowTrueCode = false;
    this->CodeWidget->SetupAttachment(RootComponent);
}

void ASBZCodeNote::OnRep_CodeToShow() {
}

void ASBZCodeNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCodeNote, CodeToShow);
}


