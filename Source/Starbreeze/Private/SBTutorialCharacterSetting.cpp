#include "SBTutorialCharacterSetting.h"

FString USBTutorialCharacterSetting::GetTutorialPlayerSku() {
    return TEXT("");
}

FGuid USBTutorialCharacterSetting::GetTutorialPlayerGuid() {
    return FGuid{};
}

USBTutorialCharacterSetting::USBTutorialCharacterSetting() {
    this->CharacterSku = TEXT("character-chains");
}

