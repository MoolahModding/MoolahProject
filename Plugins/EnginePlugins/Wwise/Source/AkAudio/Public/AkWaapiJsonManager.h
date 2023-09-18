#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AKWaapiJsonObject.h"
#include "AkWaapiFieldNames.h"
#include "AkWaapiJsonManager.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWaapiJsonManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkWaapiJsonManager();

    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, const FString& FieldValue, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
    
};

