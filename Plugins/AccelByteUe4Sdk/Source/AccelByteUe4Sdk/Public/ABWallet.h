#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DAccelByteModelsWalletInfoResponseDelegate.h"
#include "DAccelByteModelsWalletInfosResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "ABWallet.generated.h"

UCLASS(Blueprintable)
class UABWallet : public UObject {
    GENERATED_BODY()
public:
    UABWallet();

    UFUNCTION(BlueprintCallable)
    void GetWalletInfoByCurrencyCodeV2(const FString& CurrencyCode, FDAccelByteModelsWalletInfosResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetWalletInfoByCurrencyCode(const FString& CurrencyCode, FDAccelByteModelsWalletInfoResponse OnSuccess, FDErrorHandler OnError);
    
};

