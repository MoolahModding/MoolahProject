#include "ABEntitlement.h"

void UABEntitlement::ValidateUserItemPurchaseCondition(const TArray<FString>& Items, FDAccelByteModelsPlatformValidateUserItemPurchaseResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::UpdateDistributionReceiver(const FString& ExtUserId, const FAccelByteModelsAttributes& Attributes, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncTwitchDropEntitlement(const FAccelByteModelsTwitchDropEntitlement& TwitchDropModel, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncPlatformPurchaseSingleItem(FAccelByteModelsEntitlementSyncBase EntitlementSyncBase, EAccelBytePlatformSync PlatformType, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncPlatformPurchase(EAccelBytePlatformSync PlatformType, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncMobilePlatformPurchaseGooglePlay(const FAccelByteModelsPlatformSyncMobileGoogle& SyncRequest, FDAccelByteModelsPlatformSyncMobileGoogleResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncMobilePlatformPurchaseGoogle(const FAccelByteModelsPlatformSyncMobileGoogle& SyncRequest, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::SyncMobilePlatformPurchaseApple(const FAccelByteModelsPlatformSyncMobileApple& SyncRequest, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::QueryUserEntitlements(const FString& EntitlementName, const TArray<FString>& ItemIds, const int32& Offset, const int32& Limit, FDAccelByteModelsEntitlementPagingSlicedResultResponse OnSuccess, const FDErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType) {
}

void UABEntitlement::GetUserEntitlementOwnershipBySku(const FString& Sku, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::GetUserEntitlementOwnershipByItemId(const FString& ItemId, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::GetUserEntitlementOwnershipByAppId(const FString& AppId, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::GetUserEntitlementOwnershipAny(const TArray<FString>& ItemIds, const TArray<FString>& AppIds, const TArray<FString>& Skus, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::GetUserEntitlementById(const FString& Entitlementid, FDAccelByteModelsEntitlementInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::GetDistributionReceiver(const FString& PublisherNamespace, const FString& PublisherUserId, FDArrayModelsDistributionReceiverResponse OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::DeleteDistributionReceiver(const FString& ExtUserId, const FString& UserId, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::CreateDistributionReceiver(const FString& ExtUserId, const FAccelByteModelsAttributes& Attributes, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABEntitlement::ConsumeUserEntitlement(const FString& EntitlementId, const int32& UseCount, FDAccelByteModelsEntitlementInfoResponse OnSuccess, FDErrorHandler OnError) {
}

UABEntitlement::UABEntitlement() {
}

