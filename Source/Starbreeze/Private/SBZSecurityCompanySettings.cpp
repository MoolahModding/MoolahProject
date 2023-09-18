#include "SBZSecurityCompanySettings.h"

USBZSecurityCompanySettings::USBZSecurityCompanySettings() {
}

bool USBZSecurityCompanySettings::HasLeadGuard(const UObject* WorldContextObject) {
    return false;
}

bool USBZSecurityCompanySettings::HasIndestructibleCameras(const UObject* WorldContextObject) {
    return false;
}

bool USBZSecurityCompanySettings::HasCameraRuntimeLimit(const UObject* WorldContextObject) {
    return false;
}

FSBZSecurityCompanySettingData USBZSecurityCompanySettings::Get() {
    return FSBZSecurityCompanySettingData{};
}


