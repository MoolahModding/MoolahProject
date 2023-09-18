#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsBulkStatItemInc.h"
#include "AccelByteModelsBulkStatItemOperationResult.h"
#include "AccelByteModelsGlobalStatItemValueResponse.h"
#include "AccelByteModelsUserStatItemPagingSlicedResult.h"
#include "AccelByteBlueprintsStatistic.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsStatistic : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGlobalStatItemDelegate, const FAccelByteModelsGlobalStatItemValueResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserStatItemsSuccess, const FAccelByteModelsUserStatItemPagingSlicedResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAllUserStatItemsSuccess, const FAccelByteModelsUserStatItemPagingSlicedResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateUserStatItemsSuccess, const TArray<FAccelByteModelsBulkStatItemOperationResult>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBulkAddUserStatItemValueSuccess, const TArray<FAccelByteModelsBulkStatItemOperationResult>&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsStatistic();

    UFUNCTION(BlueprintCallable)
    static void IncrementUserStatItems(const TArray<FAccelByteModelsBulkStatItemInc>& Data, const UAccelByteBlueprintsStatistic::FBulkAddUserStatItemValueSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserStatItems(const TArray<FString>& StatCodes, const TArray<FString>& Tags, const UAccelByteBlueprintsStatistic::FGetUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetGlobalStatItemsByStatCode(const FString& StatCode, const UAccelByteBlueprintsStatistic::FGlobalStatItemDelegate& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUserStatItems(const UAccelByteBlueprintsStatistic::FGetAllUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateUserStatItems(const TArray<FString>& StatCodes, const UAccelByteBlueprintsStatistic::FCreateUserStatItemsSuccess& OnSuccess, const UAccelByteBlueprintsStatistic::FBlueprintErrorHandler& OnError);
    
};

