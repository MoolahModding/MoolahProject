#include "SBZLoginScreenWidget.h"


void USBZLoginScreenWidget::OnWebPageClosed(const FString& InFinalWebURL) {
}


void USBZLoginScreenWidget::OnCreateAccountBrowserSelected(USBZMenuButton* InSelectedButton) {
}

USBZLoginScreenWidget::USBZLoginScreenWidget() {
    this->ProdAccountCreateURLGameSense = TEXT("https://t.paydaythegame.com/c/4k8d2q");
    this->DevAccountCreateURLGameSense = TEXT("https://t.paydaythegame.com/c/0jderb");
    this->ProdAccountCreateURL = TEXT("https://nebula.starbreeze.com/register/");
    this->DevAccountCreateURL = TEXT("https://development.starbreeze.accelbyte.io/register/");
    this->bShouldHideCursor = false;
    this->bShowCloseButton = true;
    this->Button_CreateAccountWebBrowser = NULL;
    this->Text_PlatformName = NULL;
    this->Image_PlatformSprite = NULL;
}

