#include "SBZHoldOutArea.h"
#include "SBZSpawnWaveProgressionComponent.h"
#include "SBZSpawnWaveSettingsProxyComponent.h"

ASBZHoldOutArea::ASBZHoldOutArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnWaveSettingsProxyComponent = CreateDefaultSubobject<USBZSpawnWaveSettingsProxyComponent>(TEXT("SBZSpawnWaveSettingsProxyComponent"));
    this->SpawnWaveProgressionComponent = CreateDefaultSubobject<USBZSpawnWaveProgressionComponent>(TEXT("SBZSpawnWaveProgressionComponent"));
}

void ASBZHoldOutArea::Stop() {
}

void ASBZHoldOutArea::Start() {
}

void ASBZHoldOutArea::OnObjectiveStartedCallBack(USBZHoldOutObjectiveBase* Objective, const FGameplayTag& EventTag) {
}

void ASBZHoldOutArea::OnObjectiveResultChangedCallBack(const ESBZHoldOutObjectiveResult Result, USBZHoldOutObjectiveBase* InObjective, const FGameplayTag& EventTag) {
}

void ASBZHoldOutArea::OnObjectiveProgressChangedCallBack(USBZHoldOutObjectiveBase* Objective, float OldProgress, float NewProgress, const FGameplayTag& EventTag) {
}

bool ASBZHoldOutArea::IsAnyObjectiveActive(bool bIgnoreOptionalObjectives) const {
    return false;
}

FVector ASBZHoldOutArea::GetDroneMoveToLocation() const {
    return FVector{};
}


