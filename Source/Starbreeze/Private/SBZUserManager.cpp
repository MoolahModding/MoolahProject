#include "SBZUserManager.h"

USBZUserManager::USBZUserManager() {
}

ESBZUserStatus USBZUserManager::GetUserStatus(const UObject* WorldContextObject, const FSBZUser& User) {
    return ESBZUserStatus::InCrew;
}


