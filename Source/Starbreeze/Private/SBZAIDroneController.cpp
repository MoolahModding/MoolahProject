#include "SBZAIDroneController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "SBZDronePathFollowingComponent.h"

ASBZAIDroneController::ASBZAIDroneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZDronePathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    this->BlackboardAsset = NULL;
    this->BehaviorTree = NULL;
    this->DespawnBehaviorTree = NULL;
    this->FailedTasksUntilDespawn = 3;
}


