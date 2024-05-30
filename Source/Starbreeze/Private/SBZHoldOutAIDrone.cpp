#include "SBZHoldOutAIDrone.h"
#include "AkComponent.h"
#include "Engine/EngineTypes.h"
#include "SBZAIDroneMovementComponent.h"
#include "SBZSkeletalMeshComponentBudgeted.h"

ASBZHoldOutAIDrone::ASBZHoldOutAIDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZSkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZAIDroneMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->FollowDroneObjective = NULL;
    this->AKComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->AKComponent->SetupAttachment(RootComponent);
}

void ASBZHoldOutAIDrone::OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTag& EventTag) {
}

void ASBZHoldOutAIDrone::OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* Objective, const FGameplayTag& EventTag) {
}

void ASBZHoldOutAIDrone::OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, float OldProgress, float NewProgress, const FGameplayTag& EventTag) {
}

void ASBZHoldOutAIDrone::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void ASBZHoldOutAIDrone::OnAreaCompletedCallBack(bool bSuccess, ASBZHoldOutArea* HoldOutArea) {
}

void ASBZHoldOutAIDrone::MoveToNextHoldOutArea() {
}


