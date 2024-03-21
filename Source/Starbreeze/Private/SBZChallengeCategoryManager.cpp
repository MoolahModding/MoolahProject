#include "SBZChallengeCategoryManager.h"

USBZChallengeCategoryManager* USBZChallengeCategoryManager::GetChallengeCategoryManager(const UObject* WorldContextObject) {
    return NULL;
}

USBZChallengeCategoryData* USBZChallengeCategoryManager::GetChallengeCategoryForTag(const UObject* WorldContextObject, const FString& InTag) {
    return NULL;
}

USBZChallengeCategoryData* USBZChallengeCategoryManager::GetChallengeCategoryForChallenge(const UObject* WorldContextObject, const FSBZChallengeData& ChallengeRecord) {
    return NULL;
}

void USBZChallengeCategoryManager::GetChallengeCategoryData(const UObject* WorldContextObject, TArray<USBZChallengeCategoryData*>& OutCategoryList) {
}

USBZChallengeCategoryManager::USBZChallengeCategoryManager() {
}

