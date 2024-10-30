#include "SBZHoldOutArea.h"
#include "Components/SceneComponent.h"
#include "SBZHoldOutFogProgressionComponent.h"
#include "SBZSpawnWaveProgressionComponent.h"
#include "SBZSpawnWaveSettingsProxyComponent.h"

ASBZHoldOutArea::ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bDisplayWidgetOnSelection = false;
    this->bIsEscapeArea = false;
    this->bCanBeFirstRandomWave = false;
    this->SpawnWaveSettingsProxyComponent = CreateDefaultSubobject<USBZSpawnWaveSettingsProxyComponent>(TEXT("SBZSpawnWaveSettingsProxyComponent"));
    this->SpawnWaveProgressionComponent = CreateDefaultSubobject<USBZSpawnWaveProgressionComponent>(TEXT("SBZSpawnWaveProgressionComponent"));
    this->bApplySpawnSettingsWhenSelected = false;
    this->FogProgressionComponent = CreateDefaultSubobject<USBZHoldOutFogProgressionComponent>(TEXT("SBZHoldOutFogProgressionComponent"));
    this->MinDifficulty = ESBZHoldOutModeDifficulty::Default;
    this->Payout = 0;
    this->Drone = NULL;
}

void ASBZHoldOutArea::Stop() {
}

void ASBZHoldOutArea::Start(ESBZHoldOutModeDifficulty Difficulty) {
}

void ASBZHoldOutArea::SelectAsCurrentArea(ASBZHoldOutAIDrone* InDrone) {
}

void ASBZHoldOutArea::RandomizeArea() {
}

void ASBZHoldOutArea::OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutArea::OnObjectiveSelectedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutArea::OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* InObjective, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

void ASBZHoldOutArea::OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, int32 OldProgressCount, int32 NewProgressCount, const FGameplayTagContainer& GrantedTags, const FGameplayTagContainer& RemovedTags) {
}

bool ASBZHoldOutArea::IsAnyObjectiveActive(bool bIgnoreOptionalObjectives) const {
    return false;
}

FVector ASBZHoldOutArea::GetDroneMoveToLocation() const {
    return FVector{};
}


