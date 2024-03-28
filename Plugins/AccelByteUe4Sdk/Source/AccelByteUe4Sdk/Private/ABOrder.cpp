#include "ABOrder.h"

void UABOrder::GetUserOrders(const int32& Page, const int32& Size, FDAccelByteModelsPagedOrderInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABOrder::GetUserOrderHistory(const FString& OrderNo, FDArrayModelsOrderHistoryInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABOrder::GetUserOrder(const FString& OrderNo, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABOrder::CreateNewOrder(const FAccelByteModelsOrderCreate& OrderCreateRequest, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABOrder::CancelOrder(const FString& OrderNo, FDAccelByteModelsOrderInfoResponse OnSuccess, FDErrorHandler OnError) {
}

UABOrder::UABOrder() {
}

