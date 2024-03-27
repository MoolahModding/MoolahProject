#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsAttributes.h"
#include "AccelByteModelsEntitlementSyncBase.h"
#include "AccelByteModelsPlatformSyncMobileApple.h"
#include "AccelByteModelsPlatformSyncMobileGoogle.h"
#include "AccelByteModelsTwitchDropEntitlement.h"
#include "DAccelByteModelsEntitlementInfoResponseDelegate.h"
#include "DAccelByteModelsEntitlementOwnershipResponseDelegate.h"
#include "DAccelByteModelsEntitlementPagingSlicedResultResponseDelegate.h"
#include "DAccelByteModelsPlatformSyncMobileGoogleResponseDelegate.h"
#include "DAccelByteModelsPlatformValidateUserItemPurchaseResponseDelegate.h"
#include "DArrayModelsDistributionReceiverResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "EAccelByteAppType.h"
#include "EAccelByteEntitlementClass.h"
#include "EAccelBytePlatformSync.h"
#include "ABEntitlement.generated.h"

UCLASS(Blueprintable)
class UABEntitlement : public UObject {
    GENERATED_BODY()
public:
    UABEntitlement();
    UFUNCTION(BlueprintCallable)
    void ValidateUserItemPurchaseCondition(const TArray<FString>& Items, FDAccelByteModelsPlatformValidateUserItemPurchaseResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDistributionReceiver(const FString& ExtUserId, const FAccelByteModelsAttributes& Attributes, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncTwitchDropEntitlement(const FAccelByteModelsTwitchDropEntitlement& TwitchDropModel, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncPlatformPurchaseSingleItem(FAccelByteModelsEntitlementSyncBase EntitlementSyncBase, EAccelBytePlatformSync PlatformType, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncPlatformPurchase(EAccelBytePlatformSync PlatformType, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncMobilePlatformPurchaseGooglePlay(const FAccelByteModelsPlatformSyncMobileGoogle& SyncRequest, FDAccelByteModelsPlatformSyncMobileGoogleResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncMobilePlatformPurchaseGoogle(const FAccelByteModelsPlatformSyncMobileGoogle& SyncRequest, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncMobilePlatformPurchaseApple(const FAccelByteModelsPlatformSyncMobileApple& SyncRequest, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void QueryUserEntitlements(const FString& EntitlementName, const TArray<FString>& ItemIds, const int32& Offset, const int32& Limit, FDAccelByteModelsEntitlementPagingSlicedResultResponse OnSuccess, const FDErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementOwnershipBySku(const FString& Sku, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementOwnershipByItemId(const FString& ItemId, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementOwnershipByAppId(const FString& AppId, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementOwnershipAny(const TArray<FString>& ItemIds, const TArray<FString>& AppIds, const TArray<FString>& Skus, FDAccelByteModelsEntitlementOwnershipResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEntitlementById(const FString& Entitlementid, FDAccelByteModelsEntitlementInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetDistributionReceiver(const FString& PublisherNamespace, const FString& PublisherUserId, FDArrayModelsDistributionReceiverResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteDistributionReceiver(const FString& ExtUserId, const FString& UserId, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateDistributionReceiver(const FString& ExtUserId, const FAccelByteModelsAttributes& Attributes, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeUserEntitlement(const FString& EntitlementId, const int32& UseCount, FDAccelByteModelsEntitlementInfoResponse OnSuccess, FDErrorHandler OnError);
    
};

