#include "SBZGameStateMachineSettings.h"

USBZGameStateMachineSettings::USBZGameStateMachineSettings() {
    this->BlackScreenTime = 4.00f;
    this->IntroSequenceSafetyTimeout = 30.00f;
    this->OutroSequenceSafetyTimeout = 10.00f;
    this->JobOveviewToActionPhaseDropInTime = 1.00f;
    this->Levels.AddDefaulted(8);
    this->LevelsTutorial.AddDefaulted(4);
}

int32 USBZGameStateMachineSettings::LevelShortNameToIdx(const UObject* WorldContextObject, const FString& ShortName) {
    return 0;
}

int32 USBZGameStateMachineSettings::LevelPathToIdx(const UObject* WorldContextObject, const FSoftObjectPath& ObjectPath) {
    return 0;
}

FSoftObjectPath USBZGameStateMachineSettings::LevelIdxToPath(const UObject* WorldContextObject, int32 LevelIdx) {
    return FSoftObjectPath{};
}

bool USBZGameStateMachineSettings::IsLevelIdxValid(const UObject* WorldContextObject, int32 LevelIdx) {
    return false;
}

TArray<FSoftObjectPath> USBZGameStateMachineSettings::GetLevelsTutorial(const UObject* WorldContextObject) {
    return TArray<FSoftObjectPath>();
}

TArray<FSoftObjectPath> USBZGameStateMachineSettings::GetLevelsFeature(const UObject* WorldContextObject) {
    return TArray<FSoftObjectPath>();
}

TArray<FSoftObjectPath> USBZGameStateMachineSettings::GetLevelsDev(const UObject* WorldContextObject) {
    return TArray<FSoftObjectPath>();
}

TArray<FSoftObjectPath> USBZGameStateMachineSettings::GetLevels(const UObject* WorldContextObject) {
    return TArray<FSoftObjectPath>();
}


