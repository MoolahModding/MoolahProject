#include "SBZLevelScriptActor.h"

ASBZLevelScriptActor::ASBZLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = -1;
}

void ASBZLevelScriptActor::SetBagMarkerEnabledByTags(const FGameplayTagContainer& BagGameplayTagContainer, bool bEnabled) {
}

void ASBZLevelScriptActor::SetBagMarkerEnabledByBagType(const USBZBagType* BagType, bool bEnabled) {
}

ULevelStreamingDynamic* ASBZLevelScriptActor::SBZPlaceRandomSublevelBySoftObjectPtr(UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, const FTransform& RoomTransform, bool& bOutSuccess) {
    return NULL;
}

ULevelStreamingDynamic* ASBZLevelScriptActor::SBZPlaceRandomSublevel(UObject* WorldContextObject, const FString& LevelName, const FVector Location, const FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}







void ASBZLevelScriptActor::OnRandomizedRoomShown() {
}







void ASBZLevelScriptActor::OnOptionalObjectiveComplete(const int32 ObjectiveNumber) {
}








void ASBZLevelScriptActor::HandlePlayersCarryBagChanged(const FSBZPlayersCarryBagChangedEvent& CarryBagChangedEventData) {
}

void ASBZLevelScriptActor::HandleOutroSequenceStarted(const int32 OutroVariation) {
}

void ASBZLevelScriptActor::HandleKeyItemCountChanged(const FSBZKeyItemCountChangedEvent& KeyItemCountChangedEventData) {
}

void ASBZLevelScriptActor::HandleIntroSequenceChanged(bool bIsStarted) {
}

void ASBZLevelScriptActor::HandleBlackScreenStarted() {
}

void ASBZLevelScriptActor::HandleActionPhaseStarted() {
}

int32 ASBZLevelScriptActor::GetRandomIntegerFromStreamMixed(int32 Max, int32 MixedSeed) {
    return 0;
}

int32 ASBZLevelScriptActor::GetRandomIntegerFromLevelStream(int32 Max) {
    return 0;
}

bool ASBZLevelScriptActor::GetRandomBoolWithWeightFromStreamMixed(float Weight, int32 MixedSeed) {
    return false;
}

bool ASBZLevelScriptActor::GetRandomBoolWithWeightFromLevelStream(float Weight) {
    return false;
}

void ASBZLevelScriptActor::EndOutroSequence() {
}

void ASBZLevelScriptActor::EndIntroSequence() {
}

void ASBZLevelScriptActor::CriteriaObjectiveComplete(const USBZStatisticCriteriaData* StatisticData) {
}





