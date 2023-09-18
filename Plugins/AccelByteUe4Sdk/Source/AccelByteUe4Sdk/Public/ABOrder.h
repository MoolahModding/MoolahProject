#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsOrderCreate.h"
#include "DAccelByteModelsOrderInfoResponseDelegate.h"
#include "DAccelByteModelsPagedOrderInfoResponseDelegate.h"
#include "DArrayModelsOrderHistoryInfoResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "ABOrder.generated.h"

UCLASS(Blueprintable)
class UABOrder : public UObject {
    GENERATED_BODY()
public:
    UABOrder();

    UFUNCTION(BlueprintCallable)
    void GetUserOrders(const int32& Page, const int32& Size, FDAccelByteModelsPagedOrderInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserOrderHistory(const FString& OrderNo, FDArrayModelsOrderHistoryInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserOrder(const FString& OrderNo, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateNewOrder(const FAccelByteModelsOrderCreate& OrderCreateRequest, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void CancelOrder(const FString& OrderNo, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError);
    
};

