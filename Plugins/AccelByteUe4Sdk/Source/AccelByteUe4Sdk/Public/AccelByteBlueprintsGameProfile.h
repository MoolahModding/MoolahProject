#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsGameProfile.h"
#include "AccelByteModelsGameProfileAttribute.h"
#include "AccelByteModelsGameProfileRequest.h"
#include "AccelByteModelsPublicGameProfile.h"
#include "AccelByteBlueprintsGameProfile.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsGameProfile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGameProfileSuccess, const FAccelByteModelsGameProfile&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateGameProfileAttributeSuccess, const FAccelByteModelsGameProfile&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGameProfileSuccess, const FAccelByteModelsGameProfile&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGameProfileAttributeSuccess, const FAccelByteModelsGameProfileAttribute&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAllGameProfilesSuccess, const TArray<FAccelByteModelsGameProfile>&, Result);
    DECLARE_DYNAMIC_DELEGATE(FDeleteGameProfileSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateGameProfileSuccess, const FAccelByteModelsGameProfile&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBatchGetPublicGameProfilesSuccess, const TArray<FAccelByteModelsPublicGameProfile>&, Result);
    
    UAccelByteBlueprintsGameProfile();
    UFUNCTION(BlueprintCallable)
    static void UpdateGameProfileAttribute(const FString& ProfileId, const FAccelByteModelsGameProfileAttribute& Attribute, const UAccelByteBlueprintsGameProfile::FUpdateGameProfileAttributeSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateGameProfile(const FString& ProfileId, const FAccelByteModelsGameProfileRequest& GameProfileRequest, const UAccelByteBlueprintsGameProfile::FUpdateGameProfileSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameProfileAttribute(const FString& ProfileId, const FString& AttributeName, const UAccelByteBlueprintsGameProfile::FGetGameProfileAttributeSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameProfile(const FString& ProfileId, const UAccelByteBlueprintsGameProfile::FGetGameProfileSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllGameProfiles(const UAccelByteBlueprintsGameProfile::FGetAllGameProfilesSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteGameProfile(const FString& ProfileId, const UAccelByteBlueprintsGameProfile::FDeleteGameProfileSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void CreateGameProfile(const FAccelByteModelsGameProfileRequest& GameProfileRequest, const UAccelByteBlueprintsGameProfile::FCreateGameProfileSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void BatchGetPublicGameProfiles(TArray<FString> UserIds, const UAccelByteBlueprintsGameProfile::FBatchGetPublicGameProfilesSuccess& OnSuccess, const UAccelByteBlueprintsGameProfile::FBlueprintErrorHandler& OnError);
    
};

