#include "SBZSecurityCompanySettings.h"

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

USBZSecurityCompanySettings::USBZSecurityCompanySettings() {
}

