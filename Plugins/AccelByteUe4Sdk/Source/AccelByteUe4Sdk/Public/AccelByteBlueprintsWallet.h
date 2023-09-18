#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsWalletInfo.h"
#include "AccelByteModelsWalletInfoResponse.h"
#include "AccelByteBlueprintsWallet.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsWallet : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWalletInfoResponseSuccess, const FAccelByteModelsWalletInfoResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetWalletByCurrencyCodeSuccess, const FAccelByteModelsWalletInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsWallet();

    UFUNCTION(BlueprintCallable)
    static void GetWalletInfoByCurrencyCodeV2(const FString& CurrencyCode, const UAccelByteBlueprintsWallet::FGetWalletInfoResponseSuccess& OnSuccess, const UAccelByteBlueprintsWallet::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetWalletInfoByCurrencyCode(const FString& CurrencyCode, const UAccelByteBlueprintsWallet::FGetWalletByCurrencyCodeSuccess& OnSuccess, const UAccelByteBlueprintsWallet::FBlueprintErrorHandler& OnError);
    
};

