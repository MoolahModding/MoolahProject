#include "SBZBuyItemCallbackProxy.h"

USBZBuyItemCallbackProxy* USBZBuyItemCallbackProxy::BuyItem(UObject* NewWorldContextObject, FGuid ItemId, int32 Price, int32 DiscountedPrice, int32 Quantity, const FString& CurrencyCode) {
    return NULL;
}

USBZBuyItemCallbackProxy::USBZBuyItemCallbackProxy() {
    this->WorldContextObject = NULL;
}

