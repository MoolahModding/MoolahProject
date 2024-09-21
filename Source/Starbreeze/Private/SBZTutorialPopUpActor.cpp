#include "SBZTutorialPopUpActor.h"
#include "Components/SceneComponent.h"

ASBZTutorialPopUpActor::ASBZTutorialPopUpActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZTutorialPopUpActor::ShowTutorialPopUp(const int32 TutorialIndex, FSBZOnPopUpWidgetClosed InTutorialPopUpClosed) {
}

void ASBZTutorialPopUpActor::ShowSideBarNotification(const int32 NotificationIndex) {
}

void ASBZTutorialPopUpActor::ShowControlsReference(const int32 ReferenceIndex) {
}

void ASBZTutorialPopUpActor::Server_CloseTutorialPopUp_Implementation() {
}

void ASBZTutorialPopUpActor::OnActionPhaseEntered() {
}

void ASBZTutorialPopUpActor::CloseTutorialPopUp(FName ClosingActionName) {
}

void ASBZTutorialPopUpActor::Client_ShowTutorialPopUp_Implementation(const int32 Index) {
}

void ASBZTutorialPopUpActor::Client_ShowSideBarNotification_Implementation(const int32 Index) {
}

void ASBZTutorialPopUpActor::Client_ShowControlsReference_Implementation(const int32 Index) {
}


