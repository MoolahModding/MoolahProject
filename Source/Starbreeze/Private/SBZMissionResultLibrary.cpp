#include "SBZMissionResultLibrary.h"

int32 USBZMissionResultLibrary::GetTotalNumberOfSecuredBags(const FSBZEndMissionResultData& Resultdata) {
    return 0;
}

FSBZPlayerEndMissionResultData USBZMissionResultLibrary::GetPlayerData(const FSBZEndMissionResultData& ResultData, int32 PlayerId) {
    return FSBZPlayerEndMissionResultData{};
}

int32 USBZMissionResultLibrary::GetPlayerCashReward(const UObject* WorldContextObject, const FSBZEndMissionResultData& ResultData) {
    return 0;
}

FSBZEquippableEndMissionResultData USBZMissionResultLibrary::GetEquippableData(const FSBZCharacterEndMissionResultData& CharacterData, int32 EquippableIndex) {
    return FSBZEquippableEndMissionResultData{};
}

float USBZMissionResultLibrary::GetCurrentPlayerEquippableAccuracy(const UObject* WorldContextObject, const FSBZEndMissionResultData& ResultData, int32 EquippableIndex) {
    return 0.0f;
}

int32 USBZMissionResultLibrary::GetAllPlayersHaveSpecialKilledCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

int32 USBZMissionResultLibrary::GetAllPlayersHaveKilledCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

int32 USBZMissionResultLibrary::GetAllPlayersHaveCivilianKilledCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

float USBZMissionResultLibrary::GetAllPlayersEquippableAccuracy(const FSBZEndMissionResultData& ResultData, int32 EquippableIndex) {
    return 0.0f;
}

int32 USBZMissionResultLibrary::GetAllPlayersBeenRevivedCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

int32 USBZMissionResultLibrary::GetAllPlayersBeenKilledCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

int32 USBZMissionResultLibrary::GetAllPlayersBeenDefeatedCount(const FSBZEndMissionResultData& ResultData) {
    return 0;
}

USBZMissionResultLibrary::USBZMissionResultLibrary() {
}

