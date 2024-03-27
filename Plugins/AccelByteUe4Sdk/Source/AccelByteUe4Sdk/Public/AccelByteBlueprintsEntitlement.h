#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsEntitlementPagingSlicedResult.h"
#include "EAccelByteAppType.h"
#include "EAccelByteEntitlementClass.h"
#include "AccelByteBlueprintsEntitlement.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsEntitlement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryUserEntitlementSuccess, const FAccelByteModelsEntitlementPagingSlicedResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsEntitlement();
    UFUNCTION(BlueprintCallable)
    static void QueryUserEntitlementsMany(const FString& EntitlementName, const TArray<FString>& ItemIds, int32 Page, int32 Size, const UAccelByteBlueprintsEntitlement::FQueryUserEntitlementSuccess& OnSuccess, const UAccelByteBlueprintsEntitlement::FBlueprintErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType);
    
    UFUNCTION(BlueprintCallable)
    static void QueryUserEntitlements(const FString& EntitlementName, const FString& ItemId, int32 Page, int32 Size, const UAccelByteBlueprintsEntitlement::FQueryUserEntitlementSuccess& OnSuccess, const UAccelByteBlueprintsEntitlement::FBlueprintErrorHandler& OnError, EAccelByteEntitlementClass EntitlementClass, EAccelByteAppType AppType);
    
};

