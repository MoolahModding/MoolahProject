#include "AccelByteBlueprintsEntitlement.h"

UAccelByteBlueprintsEntitlement::UAccelByteBlueprintsEntitlement() {
}

void UAccelByteBlueprintsEntitlement::QueryUserEntitlementsMany(const FString& EntitlementName, const TArray<FString>& ItemIds, int32 Page, int32 Size, const UAccelByteBlueprintsEntitlement::FQueryUserEntitlementSuccess& OnSuccess, const UAccelByteBlueprintsEntitlement::FBlueprintErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType) {
}

void UAccelByteBlueprintsEntitlement::QueryUserEntitlements(const FString& EntitlementName, const FString& ItemId, int32 Page, int32 Size, const UAccelByteBlueprintsEntitlement::FQueryUserEntitlementSuccess& OnSuccess, const UAccelByteBlueprintsEntitlement::FBlueprintErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType) {
}


