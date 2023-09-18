#include "SBZAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "SBZAIPerceptionComponent.h"
#include "SBZAIUtilityComponent.h"
#include "SBZAgentPathFollowingComponent.h"

ASBZAIController::ASBZAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZAgentPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->VisualDetectionComponent = NULL;
    this->UtilityComponent = CreateDefaultSubobject<USBZAIUtilityComponent>(TEXT("SBZAIUtilityComponent"));
    this->BlackboardAsset = NULL;
    this->CurrentOrder = NULL;
    this->MinCoverScoreToFocus = 50;
    this->MinDistFromTraversalNavLinkToFocus = 160.00f;
    this->FocusOnLastVisibleLocationDuration = 3.00f;
    this->HeistStateAlert = 0;
    this->BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    this->PerceptionComponent = CreateDefaultSubobject<USBZAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}

bool ASBZAIController::PushOrder(USBZAIOrder* Order, ESBZAIOrderMode Mode) {
    return false;
}

USBZAIAction* ASBZAIController::PushAction(UClass* ActionClass, AActor* TargetActor) {
    return NULL;
}

void ASBZAIController::OnOrderCompleted(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result) {
}

void ASBZAIController::OnEnemyKilled(APawn* KilledPawn) {
}

void ASBZAIController::OnActionCompleted(USBZAIAction* Action, AActor* Actor, bool bSuccess) {
}

void ASBZAIController::OnActionCanceled(USBZAIAction* Action) {
}

APawn* ASBZAIController::GetCurrentEnemy() const {
    return NULL;
}



