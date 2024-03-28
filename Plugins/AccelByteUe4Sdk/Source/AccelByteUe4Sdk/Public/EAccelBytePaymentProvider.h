#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePaymentProvider.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePaymentProvider : uint8 {
    NONE,
    WALLET,
    XSOLLA,
    ADYEN,
    STRIPE,
    CHECKOUT,
    ALIPAY,
    WXPAY,
    PAYPAL,
};

