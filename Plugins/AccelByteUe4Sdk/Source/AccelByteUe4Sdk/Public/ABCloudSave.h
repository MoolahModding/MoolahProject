#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "JsonObjectWrapper.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsGameRecordDelegate.h"
#include "DModelsListGameRecordsDelegate.h"
#include "DModelsListUserRecordsDelegate.h"
#include "DModelsPaginatedBulkGetPublicUserRecordKeysResponseDelegate.h"
#include "DModelsReplaceUserRecordResponseDelegate.h"
#include "DModelsUserRecordDelegate.h"
#include "DPayloadJsonObjectDelegate.h"
#include "ABCloudSave.generated.h"

UCLASS(Blueprintable)
class UABCloudSave : public UObject {
    GENERATED_BODY()
public:
    UABCloudSave();
    UFUNCTION(BlueprintCallable)
    void SaveUserRecord(const FString& Key, FJsonObjectWrapper RecordRequest, bool IsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SaveGameRecord(const FString& Key, FJsonObjectWrapper RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUserRecordCheckLatestWithResponse(const FString& Key, FDateTime LastUpdated, FJsonObjectWrapper RecordRequest, const FDModelsReplaceUserRecordResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUserRecordCheckLatestRetryWithResponse(int32 TryAttempt, const FString& Key, FJsonObjectWrapper RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDModelsReplaceUserRecordResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUserRecordCheckLatestRetry(int32 TryAttempt, const FString& Key, FJsonObjectWrapper RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUserRecordCheckLatest(const FString& Key, const FDateTime LastUpdated, FJsonObjectWrapper RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceUserRecord(const FString& Key, FJsonObjectWrapper RecordRequest, bool IsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceGameRecordCheckLatestRetry(int32 TryAttempt, const FString& Key, FJsonObjectWrapper RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceGameRecordCheckLatest(const FString& Key, const FDateTime LastUpdated, FJsonObjectWrapper RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceGameRecord(const FString& Key, FJsonObjectWrapper RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserRecord(const FString& Key, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPublicUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGameRecord(const FString& Key, const FDModelsGameRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteUserRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserRecords(const TArray<FString>& Keys, const FDModelsListUserRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetOtherPlayerPublicRecords(const FString& UserId, const TArray<FString>& Keys, const FDModelsListUserRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetOtherPlayerPublicRecordKeys(const FString& UserId, const FDModelsPaginatedBulkGetPublicUserRecordKeysResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetGameRecords(const TArray<FString>& Keys, const FDModelsListGameRecords& OnSuccess, const FDErrorHandler& OnError);
    
};

