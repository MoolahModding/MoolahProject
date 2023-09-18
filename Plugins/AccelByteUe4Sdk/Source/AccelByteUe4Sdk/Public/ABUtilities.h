#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "JsonObjectWrapper.h"
#include "ABUtilities.generated.h"

UCLASS(Blueprintable)
class UABUtilities : public UObject {
    GENERATED_BODY()
public:
    UABUtilities();

    UFUNCTION(BlueprintCallable)
    static bool GetJsonValueAsString(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonValueAsNumber(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, float& OutNumber);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonValueAsBool(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, bool& OutBool);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonValueAsArray(const FJsonObjectWrapper& ObjectWrapper, const FString& Key, TArray<FString>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    static FString GetJsonObjectAsJsonString(const FJsonObjectWrapper& ObjectWrapper);
    
    UFUNCTION(BlueprintCallable)
    static FString DateTimeToString(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable)
    static void AddOrReplaceJsonStringValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddOrReplaceJsonNumberValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddOrReplaceJsonBoolValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddOrReplaceJsonArrayValue(FJsonObjectWrapper& ObjectWrapper, const FString& Key, const TArray<FString>& Value);
    
};

