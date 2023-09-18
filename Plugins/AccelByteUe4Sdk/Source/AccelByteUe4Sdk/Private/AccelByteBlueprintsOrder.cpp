#include "AccelByteBlueprintsOrder.h"

UAccelByteBlueprintsOrder::UAccelByteBlueprintsOrder() {
}

void UAccelByteBlueprintsOrder::GetUserOrders(int32 Page, int32 Size, const UAccelByteBlueprintsOrder::FGetUserOrdersSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsOrder::GetUserOrderHistory(const FString& OrderNo, const UAccelByteBlueprintsOrder::FGetUserOrderHistorySuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsOrder::GetUserOrder(const FString& OrderNo, const UAccelByteBlueprintsOrder::FGetUserOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsOrder::CreateNewOrder(const FAccelByteModelsOrderCreate& OrderCreate, const UAccelByteBlueprintsOrder::FCreateNewOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError) {
}

void UAccelByteBlueprintsOrder::CancelOrder(const FString& OrderNo, const UAccelByteBlueprintsOrder::FCancelOrderSuccess& OnSuccess, const UAccelByteBlueprintsOrder::FBlueprintErrorHandler& OnError) {
}


