#include "SBZAIVisibilityManager.h"

ASBZAIVisibilityManager::ASBZAIVisibilityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxComputedNodePerFrame = 100;
    this->MaxComputedCoverPointVisibilityPerFrame = 20;
    this->MaxDistFromObstacleToBeStandCovered = 150.00f;
    this->MaxDistFromObstacleToBeCrouchCovered = 150.00f;
    this->MinDistFromEnemyToBeCrouchCovered = 400.00f;
    this->MinDistFromEnemyToBeStandCovered = 400.00f;
    this->VisibilityComponent = NULL;
}

void ASBZAIVisibilityManager::UnregisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent) {
}

void ASBZAIVisibilityManager::UnregisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor) {
}

void ASBZAIVisibilityManager::UnregisterRandomSublevelVisComponent(USBZAIVisibilityComponent* InRandomSublevelVisComponent) {
}

void ASBZAIVisibilityManager::UnregisterCoverPointVisibilityCheck(ASBZCharacter* Caller) {
}

void ASBZAIVisibilityManager::RegisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent) {
}

bool ASBZAIVisibilityManager::RegisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor) {
    return false;
}

void ASBZAIVisibilityManager::RegisterRandomSublevelVisComponent(USBZAIVisibilityComponent* InRandomSublevelVisComponent) {
}

void ASBZAIVisibilityManager::RegisterCoverPointVisibilityCheck(ASBZCharacter* Caller, ASBZCoverPoint* CoverPoint, const TArray<AActor*>& Enemies, uint8 Score) {
}

void ASBZAIVisibilityManager::RateTargetLocation(const AActor* Observer, const FVector& StartLocation, const FVector& TargetLocation, const float MaxRelevantDist, const float EnemyExcluderRadius, const float RejectingHeightDiffBetweenNodeAndTarget, uint8& OutVisibilityScore, uint8& OutDistanceScore) const {
}

bool ASBZAIVisibilityManager::IsNodeVisibleFromLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const FVector& ObserverLocation, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsNodeVisibleFromActor(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const AActor* ActorObserver, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsNodeSafeFromLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsNodeSafeFromActor(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const AActor* ActorObserver, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsLocationVisibleFromLocation(const FVector& Location, const FVector& ObserverLocation, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsLocationSafeFromLocation(const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsAIVisibilityRelevantSafeFromAIVisibility(const TScriptInterface<ISBZAIVisibilityRelevant> AIVisibilityRelevant, const TScriptInterface<ISBZAIVisibilityRelevant> ObserverAIVisibilityRelevant, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::HasVisibilityData() const {
    return false;
}

FSBZAIVisibilityLeafNode ASBZAIVisibilityManager::GetAiVisibilityNode(const FVector& Location) const {
    return FSBZAIVisibilityLeafNode{};
}

ASBZAIVisibilityManager* ASBZAIVisibilityManager::GetAIVisibilityManager(UObject* WorldContextObject) {
    return NULL;
}

bool ASBZAIVisibilityManager::DebugLocation(const UObject* WorldContextObject, const FVector& Location, const bool bDrawAzymuts) const {
    return false;
}


