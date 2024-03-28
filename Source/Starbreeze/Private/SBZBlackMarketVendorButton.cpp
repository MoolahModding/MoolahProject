#include "SBZBlackMarketVendorButton.h"

void USBZBlackMarketVendorButton::SetActiveVendor(bool bInIsActiveVendor) {
}



void USBZBlackMarketVendorButton::InitializeVendorData(const USBZVendorData* InVendorData) {
}

USBZVendorData* USBZBlackMarketVendorButton::GetVendorData() const {
    return NULL;
}

USBZBlackMarketVendorButton::USBZBlackMarketVendorButton() {
    this->VendorData = NULL;
    this->bIsActiveVendor = false;
}

