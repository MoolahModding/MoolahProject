#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsBinaryInfoDelegate.h"
#include "DModelsGameBinaryRecordDelegate.h"
#include "DModelsListGameBinaryRecordsDelegate.h"
#include "DModelsListUserBinaryRecordsDelegate.h"
#include "DModelsPaginatedGameBinaryRecordsDelegate.h"
#include "DModelsPaginatedUserBinaryRecordsDelegate.h"
#include "DModelsUserBinaryRecordDelegate.h"
#include "ABBinaryCloudSave.generated.h"

UCLASS(Blueprintable)
class UABBinaryCloudSave : public UObject {
    GENERATED_BODY()
public:
    UABBinaryCloudSave();
    UFUNCTION(BlueprintCallable)
    void UpdateUserBinaryRecordMetadata(const FString& Key, bool bIsPublic, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateUserBinaryRecordFile(const FString& Key, const FString& FileType, const FString& FileLocation, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SaveUserBinaryRecord(const FString& Key, bool bIsPublic, const FString& FileType, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void RequestUserBinaryRecordPresignedUrl(const FString& Key, const FString& FileType, const FDModelsBinaryInfo& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPublicUserBinaryRecord(const FString& Key, const FString& UserId, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGameBinaryRecord(const FString& Key, const FDModelsGameBinaryRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentUserBinaryRecord(const FString& Key, const FDModelsUserBinaryRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteUserBinaryRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkQueryPublicUserBinaryRecords(const FString& UserId, const FDModelsPaginatedUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void BulkQueryGameBinaryRecords(const FString& Query, const FDModelsPaginatedGameBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void BulkQueryCurrentUserBinaryRecords(const FString& Query, const FDModelsPaginatedUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetPublicUserBinaryRecordsByUserIds(const FString& Key, const TArray<FString>& UserIds, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetPublicUserBinaryRecordsByKeys(const TArray<FString>& Keys, const FString& UserId, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetGameBinaryRecords(const TArray<FString>& Keys, const FDModelsListGameBinaryRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetCurrentUserBinaryRecords(const TArray<FString>& Keys, const FDModelsListUserBinaryRecords& OnSuccess, const FDErrorHandler& OnError);
    
};

