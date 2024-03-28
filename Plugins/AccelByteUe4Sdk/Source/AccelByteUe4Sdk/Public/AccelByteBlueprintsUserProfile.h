#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsUserProfileCreateRequest.h"
#include "AccelByteModelsUserProfileInfo.h"
#include "AccelByteModelsUserProfileUpdateRequest.h"
#include "AccelByteModelsUserProfileUploadURLResult.h"
#include "EAccelByteFileType.h"
#include "AccelByteBlueprintsUserProfile.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsUserProfile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateUserProfileSuccess, const FAccelByteModelsUserProfileInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdatePrivateCustomAttributesSuccess, const FJsonObjectWrapper&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserProfileSuccess, const FAccelByteModelsUserProfileInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPrivateCustomAttributesSuccess, const FJsonObjectWrapper&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGenerateUploadURLSuccess, const FAccelByteModelsUserProfileUploadURLResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGenerateUploadURLForUserContentSuccess, const FAccelByteModelsUserProfileUploadURLResult&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateUserProfileSuccess, const FAccelByteModelsUserProfileInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    
    UAccelByteBlueprintsUserProfile();
    UFUNCTION(BlueprintCallable)
    static void UpdateUserProfile(const FAccelByteModelsUserProfileUpdateRequest& ProfileUpdateRequest, const UAccelByteBlueprintsUserProfile::FUpdateUserProfileSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdatePrivateCustomAttributes(const FJsonObjectWrapper PrivateCustomAttributesUpdateRequest, const UAccelByteBlueprintsUserProfile::FUpdatePrivateCustomAttributesSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserProfile(const UAccelByteBlueprintsUserProfile::FGetUserProfileSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrivateCustomAttributes(const UAccelByteBlueprintsUserProfile::FGetPrivateCustomAttributesSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateUploadURLForUserContent(const FString& UserId, EAccelByteFileType FileType, const UAccelByteBlueprintsUserProfile::FGenerateUploadURLForUserContentSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateUploadURL(const FString& Folder, EAccelByteFileType FileType, const UAccelByteBlueprintsUserProfile::FGenerateUploadURLSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateUserProfile(const FAccelByteModelsUserProfileCreateRequest& ProfileCreateRequest, const UAccelByteBlueprintsUserProfile::FCreateUserProfileSuccess& OnSuccess, const UAccelByteBlueprintsUserProfile::FBlueprintErrorHandler& OnError);
    
};

