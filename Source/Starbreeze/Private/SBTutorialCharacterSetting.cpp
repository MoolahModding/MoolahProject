#include "SBTutorialCharacterSetting.h"

USBTutorialCharacterSetting::USBTutorialCharacterSetting() {
    this->CharacterSku = TEXT("character-dallas");
}

FString USBTutorialCharacterSetting::GetTutorialPlayerSku() {
    return TEXT("");
}

FGuid USBTutorialCharacterSetting::GetTutorialPlayerGuid() {
    return FGuid{};
}


