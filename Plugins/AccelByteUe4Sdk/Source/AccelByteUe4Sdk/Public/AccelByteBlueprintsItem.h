#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsItemCriteria.h"
#include "AccelByteModelsItemInfo.h"
#include "AccelByteModelsItemPagingSlicedResult.h"
#include "AccelByteModelsPopulatedItemInfo.h"
#include "EAccelByteItemListSortBy.h"
#include "AccelByteBlueprintsItem.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsItem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FSearchItemSuccess, const FAccelByteModelsItemPagingSlicedResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetItemsByCriteriaSuccess, const FAccelByteModelsItemPagingSlicedResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetItemByIdSuccess, const FAccelByteModelsPopulatedItemInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetItemByAppIdSuccess, const FAccelByteModelsItemInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsItem();
    UFUNCTION(BlueprintCallable)
    static void SearchItem(const FString& Language, const FString& Keyword, int32 Page, int32 Size, const FString& Region, const UAccelByteBlueprintsItem::FSearchItemSuccess& OnSuccess, const UAccelByteBlueprintsItem::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemsByCriteria(const FAccelByteModelsItemCriteria& ItemCriteria, const int32& Offset, const int32& Limit, TArray<EAccelByteItemListSortBy> SortBy, const UAccelByteBlueprintsItem::FGetItemsByCriteriaSuccess& OnSuccess, const UAccelByteBlueprintsItem::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemById(const FString& ItemId, const FString& Region, const FString& Language, const UAccelByteBlueprintsItem::FGetItemByIdSuccess& OnSuccess, const UAccelByteBlueprintsItem::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetItemByAppId(const FString& AppId, const FString& Region, const FString& Language, const UAccelByteBlueprintsItem::FGetItemByAppIdSuccess& OnSuccess, const UAccelByteBlueprintsItem::FBlueprintErrorHandler& OnError);
    
};

