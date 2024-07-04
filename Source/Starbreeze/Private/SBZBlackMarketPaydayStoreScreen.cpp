#include "SBZBlackMarketPaydayStoreScreen.h"

USBZBlackMarketPaydayStoreScreen::USBZBlackMarketPaydayStoreScreen() {
    this->StackValue = TEXT("Default__SBZBlackMarketPaydayStoreScreen");
    this->Panel_ItemList = NULL;
    this->RealMoneyStoreItemButtonClass = NULL;
}




void USBZBlackMarketPaydayStoreScreen::OnRealMoneyItemButtonSelected(USBZMenuButton* InButton) {
}

void USBZBlackMarketPaydayStoreScreen::OnBuyRealMoneyItemPurchaseCompleted(ESBZMetaRequestResult Result) {
}


