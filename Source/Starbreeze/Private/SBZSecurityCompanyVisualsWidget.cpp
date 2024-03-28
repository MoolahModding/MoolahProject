#include "SBZSecurityCompanyVisualsWidget.h"

void USBZSecurityCompanyVisualsWidget::SetEmpty() {
}




void USBZSecurityCompanyVisualsWidget::NativeOnAssetLoaded() {
}

void USBZSecurityCompanyVisualsWidget::InitializeSecurityCompany(const ESBZSecurityCompany InSecurityCompany) {
}

ESBZSecurityCompany USBZSecurityCompanyVisualsWidget::GetSecurityCompanyEnum() const {
    return ESBZSecurityCompany::None;
}

UPD3SecurityCompanyDataAsset* USBZSecurityCompanyVisualsWidget::GetSecurityCompany() const {
    return NULL;
}

USBZSecurityCompanyVisualsWidget::USBZSecurityCompanyVisualsWidget() {
    this->SecurityCompanyEnum = ESBZSecurityCompany::None;
    this->SecurityCompanyAsset = NULL;
}

