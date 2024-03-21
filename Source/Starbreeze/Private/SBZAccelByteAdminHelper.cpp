#include "SBZAccelByteAdminHelper.h"

void USBZAccelByteAdminHelper::CheckLogoutDone(const FString& Email, const FString& Username, const FString& Password) {
}

USBZAccelByteAdminHelper::USBZAccelByteAdminHelper() {
    this->GauntletOAuthClientId = TEXT("bf11ac93bbbe4fb0b75d2b449e850a65");
    this->BaseUrl = TEXT("https://development.starbreeze.accelbyte.io");
    this->Namespace = TEXT("pd3");
}

