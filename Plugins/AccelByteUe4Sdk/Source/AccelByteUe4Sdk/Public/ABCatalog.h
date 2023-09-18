#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsItemCriteria.h"
#include "DArrayModelsCategoryInfoResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsCategoryInfoResponseDelegate.h"
#include "DModelsItemDynamicDataResponseDelegate.h"
#include "DModelsItemInfoResponseDelegate.h"
#include "DModelsItemPagingSlicedResultResponseDelegate.h"
#include "DModelsPopulatedItemInfoResponseDelegate.h"
#include "EAccelByteItemListSortBy.h"
#include "ABCatalog.generated.h"

UCLASS(Blueprintable)
class UABCatalog : public UObject {
    GENERATED_BODY()
public:
    UABCatalog();

    UFUNCTION(BlueprintCallable)
    void SearchItem(const FString& Language, const FString& Keyword, const int32& Offset, const int32& Limit, const FString& Region, FDModelsItemPagingSlicedResultResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRootCategories(const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetItemsByCriteria(const FAccelByteModelsItemCriteria& ItemCriteria, const int32& Offset, const int32& Limit, TArray<EAccelByteItemListSortBy> SortBy, FDModelsItemPagingSlicedResultResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetItemDynamicData(const FString& ItemId, FDModelsItemDynamicDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetItemById(const FString& ItemId, const FString& Language, const FString& Region, const FString& StoreId, bool bPopulateBundle, FDModelsPopulatedItemInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetItemByAppId(const FString& AppId, const FString& Language, const FString& Region, FDModelsItemInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetDescendantCategories(const FString& CategoryPath, const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetChildCategories(const FString& CategoryPath, const FString& Language, FDArrayModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetCategory(const FString& CategoryPath, const FString& Language, FDModelsCategoryInfoResponse OnSuccess, FDErrorHandler OnError);
    
};

