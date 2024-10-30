#include "SBZArmorSettings.h"

USBZArmorSettings::USBZArmorSettings() {
}

FSBZArmorChunkTypeData USBZArmorSettings::GetChunkData(ESBZArmorChunkType Type) const {
    return FSBZArmorChunkTypeData{};
}

USBZArmorSettings* USBZArmorSettings::Get() {
    return NULL;
}


