#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsBulkStatItemInc.h"
#include "AccelByteModelsBulkUserStatItemInc.h"
#include "DArrayBulkStatItemOperationDelegateDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DFetchUserStatisticDelegate.h"
#include "DGlobalStatItemDelegateDelegate.h"
#include "DUserStatItemPagingSlicedDelegateDelegate.h"
#include "EAccelByteStatisticSortBy.h"
#include "ABServerStatistic.generated.h"

UCLASS(Blueprintable)
class UABServerStatistic : public UObject {
    GENERATED_BODY()
public:
    UABServerStatistic();
    UFUNCTION(BlueprintCallable)
    void IncrementUserStatItems(const FString& UserId, const TArray<FAccelByteModelsBulkStatItemInc>& Data, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void IncrementManyUsersStatItems(const TArray<FAccelByteModelsBulkUserStatItemInc>& Data, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserStatItems(const FString& UserId, const TArray<FString>& StatCodes, const TArray<FString>& Tags, FDUserStatItemPagingSlicedDelegate OnSuccess, FDErrorHandler OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void GetGlobalStatItemsByStatCode(const FString& StatCode, FDGlobalStatItemDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetAllUserStatItems(const FString& UserId, FDUserStatItemPagingSlicedDelegate OnSuccess, FDErrorHandler OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void CreateUserStatItems(const FString& UserId, const TArray<FString>& StatCodes, FDArrayBulkStatItemOperationDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkFetchStatItemsValue(const FString& StatCode, const TArray<FString>& UserIds, FDFetchUserStatistic OnSuccess, FDErrorHandler OnError);
    
};

