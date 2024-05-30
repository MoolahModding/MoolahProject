#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArraySelectDelegateDelegate.h"
#include "ArraySortDelegateDelegate.h"
#include "SBZArrayLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZArrayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZArrayLibrary();

    UFUNCTION(BlueprintCallable)
    static void SortArray(const TArray<UObject*>& Array, TArray<UObject*>& OutArray, const FArraySortDelegate& SortCallback);
    
    UFUNCTION(BlueprintCallable)
    static int32 SelectArray(const TArray<UObject*>& Array, TArray<UObject*>& OutArray, const FArraySelectDelegate& SelectCallback, const int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizedSplitArray(const TArray<UObject*>& ObjectList, int32 Min, int32 Max, const FRandomStream& RandomStream, TArray<UObject*>& ChosenObjects, TArray<UObject*>& LeftoverObjects);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindArray(const TArray<UObject*>& Array, const FArraySelectDelegate& SelectCallback);
    
};

