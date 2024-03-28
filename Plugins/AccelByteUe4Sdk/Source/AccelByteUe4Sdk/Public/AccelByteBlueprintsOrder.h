#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsOrderCreate.h"
#include "AccelByteModelsOrderHistoryInfo.h"
#include "AccelByteModelsOrderInfo.h"
#include "AccelByteModelsPagedOrderInfo.h"
#include "AccelByteBlueprintsOrder.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsOrder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserOrderSuccess, const FAccelByteModelsOrderInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserOrdersSuccess, const FAccelByteModelsPagedOrderInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserOrderHistorySuccess, const TArray<FAccelByteModelsOrderHistoryInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateNewOrderSuccess, const FAccelByteModelsOrderInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCancelOrderSuccess, const FAccelByteModelsOrderInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsOrder();
    UFUNCTION(BlueprintCallable)
    static void GetUserOrders(int32 Page, int32 Size, const UAccelByteBlueprintsOrder::FGetUserOrdersSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserOrderHistory(const FString& OrderNo, const UAccelByteBlueprintsOrder::FGetUserOrderHistorySuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserOrder(const FString& OrderNo, const UAccelByteBlueprintsOrder::FGetUserOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNewOrder(const FAccelByteModelsOrderCreate& OrderCreate, const UAccelByteBlueprintsOrder::FCreateNewOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CancelOrder(const FString& OrderNo, const UAccelByteBlueprintsOrder::FCancelOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError);
    
};

