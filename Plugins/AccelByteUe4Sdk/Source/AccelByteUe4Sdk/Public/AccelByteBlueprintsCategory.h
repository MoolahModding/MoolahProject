#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsCategoryInfo.h"
#include "AccelByteBlueprintsCategory.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsCategory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetRootCategoriesSuccess, const TArray<FAccelByteModelsCategoryInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetDescendantCategoriesSuccess, const TArray<FAccelByteModelsCategoryInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetChildCategoriesSuccess, const TArray<FAccelByteModelsCategoryInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetCategorySuccess, const FAccelByteModelsCategoryInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsCategory();

    UFUNCTION(BlueprintCallable)
    static void GetRootCategories(const FString& Language, const UAccelByteBlueprintsCategory::FGetRootCategoriesSuccess& OnSuccess, const UAccelByteBlueprintsCategory::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetDescendantCategories(const FString& Language, const FString& CategoryPath, const UAccelByteBlueprintsCategory::FGetDescendantCategoriesSuccess& OnSuccess, const UAccelByteBlueprintsCategory::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetChildCategories(const FString& Language, const FString& CategoryPath, const UAccelByteBlueprintsCategory::FGetChildCategoriesSuccess& OnSuccess, const UAccelByteBlueprintsCategory::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetCategory(const FString& ParentPath, const FString& Language, const UAccelByteBlueprintsCategory::FGetCategorySuccess& OnSuccess, const UAccelByteBlueprintsCategory::FBlueprintErrorHandler& OnError);
    
};

